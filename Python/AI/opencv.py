import cv2
#print(cv2.__version__)  #shows version of opencv installed
img=cv2.imread('/home/ubuntu/Practice/Python/AI/lena.jpg',0) #first one is image name or path, 
#2nd one is flag : 1 for colour, 0 for grayscale, -1 includes alpha channel rgb
print(img) #read image
cv2.imshow('hello',img) #1st is window name & 2nd is image variable img
#shows & exists very fast
cv2.waitKey(5000)   #wait is for waitins the number in brackets is in mili seconds
cv2.destroyAllWindows() #destroys all windows
#cv.destroyWindow() destroys a specific window