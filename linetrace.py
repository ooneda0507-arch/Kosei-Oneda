import time
from ev3dev2.auto import TouchSensor,ColorSensor,Motor

class LineTracer(object):
 def init (self):
  self.touch=TouchSensor('in1')
  self.color=ColorSensor()
  self.lmr=Motor('outA')
  self.lml=Motor('outD')

  self.target=0

 def calibrate(self):
  print('calibration␣mode\n')
  print('measure␣reflected␣light␣intensity␣on␣the␣black␣line')
  if self.touch.wait_for_pressed():
   black=self.color.reflected_light_intensity
   print('black␣:␣'+str(black))
  time.sleep(0.5)
 
  print('measure␣reflected␣light␣intensity␣on␣the␣white␣area')
  if self.touch.wait_for_pressed():
   white=self.color.reflected_light_intensity
   print('white␣:␣'+str(white))
 
  self.target=(black+white)/2
  print('target␣:␣'+str(self.target))

 def linetrace(self, faster,slower):
  while self.touch.isreleased:
   light=self.color.reflected_light_intensity
 # white
   if light>self.target:
    self.lmr.runforever(speedsp=faster)
    self.lml.runforever(speedsp=slower)
 # black
   else:
    self.lmr.runforever(speedsp=slower)
    self.lml.runforever(speedsp=faster)
 
  self.lmr.stop(stopaction='brake')
  self.lml.stop(stopaction='brake')
 
 
if name =='__main__':
 trace=LineTracer()
 trace.calibrate()
 time.sleep(0.5)
 
 fastermotor=800
 slowermotor=100
 trace.linetrace(fastermotor,slowermotor)