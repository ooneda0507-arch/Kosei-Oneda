
import cv2
import matplotlib.pyplot as plt
import numpy as np

img = cv2.imread("IMG_2741.jpg")
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
img_array = np.asarray(img)

print(img_array.shape)
print(img_array[0,0,:])

plt.imshow(img_array)
plt.show()
