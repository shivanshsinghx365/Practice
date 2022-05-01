"""Draw geometric shapes on images using Python OpenCV"""

import numpy as np
import cv2

img=cv2.imread('/home/ubuntu/Practice/Python/AI/lena.jpg',1)

#overwrite a line to the image
img=cv2.line(img,(0,0),(255,255),(255,0,0),5)
#1st argument is image itself
#2nd is the first point's coordinates in form of tuple
#3rd is the second point's coordinates in form of tuple
#4th is the colour in BGR fromat tuple, eg : (255,0,0) 255 blue 0 green 0 red, 
# (255 everything is white) (0 everything is black)
#next is thickness(in numbers lowest is 1),then linetype, then shift

cv2.imshow('image',img)

cv2.waitKey(0)
cv2.destroyAllWindows()