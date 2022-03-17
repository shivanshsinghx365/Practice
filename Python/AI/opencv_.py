import numpy as np
import cv2

img=cv2.imread('/home/ubuntu/Practice/Python/AI/lena.jpg',0)

cv2.imshow('image',img)

cv2.waitKey(500)
cv2.destroyAllWindows()