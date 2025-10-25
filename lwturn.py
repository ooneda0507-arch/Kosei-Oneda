import time
from ev3dev2.auto import Motor,ColorSensor,TouchSensor,UltrasonicSensor
 
class lwturn():
 def init (self):
  self.lmr=Motor(’outD’)
  self.lml=Motor(’outA’)
  self.color=ColorSensor()
  self.touch=TouchSensor(’in1’)
  self.us=UltrasonicSensor()
  self.DISTANCE=5
 
 def main(self):
  self.run(300,300)
 
  try:
   while self.touch.isreleased:
     distance=self.us.distancecentimeters
     if distance<=self.DISTANCE:
     self.run(300,300)
 
     if self.color.color==1:
      self.run(−300,−300)
 
   except KeyboardInterrupt:
     pass
 
   self.stop()
 
  def run(self,right, left):
   self.lmr.runforever(speedsp=right)
   self.lml.runforever(speedsp=left)
 
  def stop(self):
   self.lmr.stop(stopaction=’brake’)
   self.lml.stop(stopaction=’brake’)
                 
if name ==’__main__’:
 vehicle=lwturn()
 vehicle.main()