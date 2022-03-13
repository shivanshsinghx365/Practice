import cv2
#print(cv2.__version__)  #shows version of opencv installed
img=cv2.imread('/home/ubuntu/Practice/Python/AI/lena.jpg',1) #first one is image name or path, 
#2nd one is flag : 1 for colour, 0 for grayscale, -1 includes alpha channel rgb
print(img) #read image
cv2.imshow('hello',img) #1st is window name & 2nd is image variable img
#shows & exists very fast
k=cv2.waitKey(5000)   #wait is for waitins the number in brackets is in mili seconds
#k is just created for checking what key is pressed, waitKey can be used without k as well
#if you wait 0, then it won't close automatically and would wait for manual closing of the window
#if wait is not working on 64 bit write : "waitKey(5000) & 0xFF" where 0xFF is a mask
if k==27: #27 is ascii of esc
    cv2.destroyAllWindows() #destroys all windows
elif k==ord('s'):   #ord takes a key as input #cv.destroyWindow() destroys a specific window
    cv2.imwrite("lena_copy.png",img)  # writes an image in the form of a file
    #1st argument is name, # 2nd argument is image
    cv2.destroyAllWindows()