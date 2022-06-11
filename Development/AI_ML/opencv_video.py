"""input from webcam"""

import cv2

#we captures videos frame by frame here
cap = cv2.VideoCapture(0) #cap is just a variable and 
#can be also used to get few properties about the captured video
#VideoCapture takes the file name "c++.mp4" a string or
#the device index of the camera (generally this is 0 or -1) a number
#if there are more than one camera then you can try 1,2,etc

fourcc=cv2.VideoWriter_fourcc(*'XVID') #we can use the fourcc code we like
#you can slo write: fourcc=cv2.VideoWriter_fourcc('X','V','I','D')
#avi used XVID mp4 uses mp4v
#if you wrote wrong it will auto correct to default at least in case of mp4

out=cv2.VideoWriter("output.avi",fourcc,20.0,(640,480)) #writer class is to save the captured videos
#1st argument is the name of the output file with extension
#2nd argument is a FOURCC code to specify the video codec
#3rd argument is number of frames per second (fps)
#4th argument is size of frames (length,breadth)

print(cap.isOpened()) #see the output of video's existence

#while loop is created to capture the frame continuously
#while(True): #to run for long time till you exit
while(cap.isOpened()): #isOpened checks if the file or source is open or not
    #gives True if exists else gives False if file path is wrong or index is wrong
    #if cap.isOpedned gives false you can try opening using cap.open() also


    ret,frame = cap.read() #read method will return true if frame is available
    #the frame will be saved in the frame variable 
    #ret will save the true or false values (based on wether or not frame is present)

    if ret == True: #without this it executes even when frame is absent

        k=cap.get(cv2.CAP_PROP_FRAME_WIDTH) #use print to print this
        print(k)
        k=cap.get(cv2.CAP_PROP_FRAME_HEIGHT)
        print(k)
        #this function takes propID as argument, and gives appropriate answer
        #https://docs.opencv.org/4.0.0/d4/d15/group__videoio__flags__base.html#gaeb8dd9c89c10a5c63c139bf7c4f5704d

        #image can also be converted to grayscale using the following statements
        gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY) #cvt is for converting colour
        #by default image is captured in BGR (blue,green,red)
        #1st argument is source, here it is frame
        #2nd argument is the conversion we want to do
        #2nd argument also uses a cv method called COLOUR_.....

        out.write(frame) #write writes the frame called "frame" to the output file declared by "out"
        #video is saved in the default coloured BGR mode not grayscale

        cv2.imshow("frames",gray) #used to show the frame (either rgb frame or grayscale gray)
        #1st argument is window name
        #2nd variable is used to actually display the frame

        if cv2.waitKey(1) & 0xFF == ord('q'):  #waits 1ms each time till key q is pressed 
            #and input is taken in the meanwhile
            #0xFF is mask for 64 bit processors
            break #exits loop on presing q
            #if you try to close using cut, it only cuts one frame and video continues

    else:
        break #exit if no frame exists

cap.release()  #releases the resources held by capture variables (cap)
out.release() #releases resources held by writer

cv2.destroyAllWindows() #destroys all windows