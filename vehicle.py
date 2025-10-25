class Car:
 def __init__(self,name): #初期化，エンジンをスタートするメソッド
  self.name=name
  print(self.name+",␣Engine␣start!")
 def pedal(self): #加速するメソッド
  print("Broom")
 def brake(self): #減速するメソッド
  print("Screech")
 def horn(self): #クラクションを鳴らすメソッド
  print("Beep␣Beep")
 def light(self): #ライトをつけるメソッド
  print("Light␣on")
 def stop(self): #エンジンを切るメソッド
  print(self.name+",␣Engine␣stop")
 def parking(self):
  print("pi-")

class FlyingCar(Car):
 #メソッドオーバーライドにより，継承したクラスCarの__init__メソッドが初期化される
 def __init__(self,name):
  super().__init__(name) #Carクラスの__init__メソッドを呼び出す
  print("Height:␣0␣(m)")
 def takeoff(self):
  print("Takeoff!")
  print("Height:␣1␣(m)")
 def landing(self):
  print("Landing!")
  print("Height:␣0␣(m)")

class TeleportCraft(FlyingCar):
 def __init__(self,name):
  super().__init__(name)
  print("Time: 0 (year future)\n")

 def teleport(self):
  print("byu-n")
  print("time: 100 (year future)\n")
 def draemon(self):
  print("tettere-")