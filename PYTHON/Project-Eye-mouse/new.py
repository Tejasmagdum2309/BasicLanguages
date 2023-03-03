# opencv(open source computer vision library)
# mediapie (eye detection and lots of stuf)
# pyautogu -- allows mouse and keybord controll



import cv2     # Helps in image procssing
import mediapipe as mp  # for face capturing and eye capturing
import pyautogui   

face_mesh = mp.solutions.face_mesh.FaceMesh(refine_landmarks = True) 
 #refine_landmark for get refine landmar gives 478 landmarks and every landmark identify diff. points on face 
cam = cv2.VideoCapture(0)      # to use camera 
screen_w,screen_h = pyautogui.size()
while True :
    _,frame = cam.read()       # to read frames from the camera 
    frame = cv2.flip(frame,1)
    rgb_frame = cv2.cvtColor(frame,cv2.COLOR_BGR2RGB)  # face detection get easier
    op = face_mesh.process(rgb_frame)
    landmark_points = op.multi_face_landmarks # no. of faces in one image  give op as x ,y , and z cordinates on the screen (some fractional points)
    # print(landmark_points)
    
    frame_h,frame_w,_ = frame.shape           
    if landmark_points :
        landmarks = landmark_points[0].landmark
        for id , landmark in enumerate(landmarks[474 : 478]) : # for left eye land marks
            x = int(landmark.x * frame_w)  # for getting pixcel no. on screen we multiply it by frame_h n frame_w
            y = int(landmark.y * frame_h)
            cv2.circle(frame, (x, y), 5, (0, 255, 0))
            # print(x ,y)
            if id == 1 :                                  # for moving arrow
                screen_x = int(landmark.x * screen_w )
                screen_y = int(landmark.y * screen_h )
                pyautogui.moveTo(screen_x,screen_y)

        left = [landmarks[145] ,landmarks[159]]
        for landmark in left :
            x = int(landmark.x * frame_w)  # for getting pixcel no. on screen we multiply it by frame_h n frame_w
            y = int(landmark.y * frame_h)
            cv2.circle(frame, (x, y), 5, (255, 0, 0))
            # print((28*((right[0].y -right[1].y)/10)))
            if (28*((left[0].y -left[1].y)/10))  < 0.03 :
                pyautogui.click()
                pyautogui.sleep(1)
                

    cv2.imshow('Eye Controlled Mouse',frame)   # show the window of frames
    cv2.waitKey(1)  
    