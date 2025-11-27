import cv2
import numpy as np
import matplotlib.pyplot as plt

img1 = cv2.imread('C:Users/ooned/test_folder/thumbnail_image2.jpg')
img2 = cv2.imread('C:Users/ooned/test_folder/thumbnail_image3.jpg')

sift = cv2.SIFT_create()

keypoints1, descriptors1 = sift.detectAndCompute(img1,None)

img1_with_keypoints = cv2.drawKeypoints(img1,keypoints1,None,flags = cv2.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS)

keypoints2, descriptors2 = sift.detectAndCompute(img2,None)

bf = cv2.BFMatcher(cv2.NORM_L2,crossCheck = True)
matches = bf.match(descriptors1,descriptors2)
matches = sorted(matches,key = lambda x: x.distance)

match_img = cv2.drawMatches(img1,keypoints1,img2,keypoints2,matches[:50],None,flags = cv2.DrawMatchesFlags_NOT_DRAW_SINGLE_POINTS)

plt.title("keypoints1")
plt.imshow(cv2.cvtColor(img1_with_keypoints,cv2.COLOR_BGR2RGB))
plt.axis("off")

plt.title("matching")
plt.imshow(cv2.cvtColor(match_img,cv2.COLOR_BGR2RGB))
plt.axis("off")
