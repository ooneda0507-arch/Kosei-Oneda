import cv2
import matplotlib.pyplot as plt
# Haarカスケードのモデルファイルを読み込む
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades +'haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier(cv2.data.haarcascades +'haarcascade_eye_tree_eyeglasses.xml')

def detect_and_display(image_path):
  # 画像を読み込む
  image = cv2.imread(image_path)
  # グレースケールに変換
  gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
  # 顔を検出
  faces = face_cascade.detectMultiScale(gray, scaleFactor=1.2,minNeighbors=6, minSize=(50, 50))
  # 顔領域の検出
  for (x, y, w, h) in faces:
    #検知した顔を短形で囲む
    cv2.rectangle(image, (x, y), (x+w, y+h), (255, 0, 0), 3)
    #顔画像(グレー )
    roi_gray = gray[y:y+h, x:x+w]
    #顔ｇ増し(カラー)
    roi_color = image[y:y+h, x:x+w]
    # 顔領域内で目を検出
    eyes = eye_cascade.detectMultiScale(roi_gray)

    for (ex, ey, ew, eh) in eyes:
      #検知した目を矩形で囲む
      cv2.rectangle(roi_color, (ex, ey), (ex+ew, ey+eh), (0, 255,0), 3)

  # 結果を表示
  plt.figure(figsize=(11, 6))
  plt.imshow(cv2.cvtColor(image, cv2.COLOR_BGR2RGB))
  plt.axis('off')
  plt.show()

# 画像のパスを指定
image_path = "C:/Users/ooned/test_folder/thumbnail_IMG_1961.png" # 画像ファイルのパスを指定
detect_and_display(image_path)