import cv2
import numpy as np

print(cv2.__version__)
image = cv2.imread('/home/x-optimus/robot_ws/opencv_test/images/face.jpeg', cv2.IMREAD_UNCHANGED)
height, widht, channel = image.shape
image = cv2.resize(image, (0,0), fx=0.5 ,fy=0.5, interpolation = cv2.INTER_AREA)
cv2.imshow('imageWindow',image)
cv2.waitKey(0)
cv2.destroyWindow()
