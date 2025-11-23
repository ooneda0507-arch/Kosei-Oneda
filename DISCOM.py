import pydicom
import matplotlib.pyplot as plt

path = "MR_JPG_IR6a.dcm"

dataset = pydicom.dcmread(path)

print("Dataset type:",type(dataset))

img = dataset.pixel_array

fig,ax = plt.subplots()
ax.imshow(img,cmap= 'gary')
ax.set_axis_off()
plt.title("DISCOM IMAGE")
plt.show()

patient_name = dataset.get((0x0010,0x0010),None)
patient_id = dataset.get((0x0010,0x0020),None)
if patient_name:
  print("Patient:",patient_name.value)
if patient_id:
  print("id:",patient_id.value)

print("DISCOM Dataset Contents:")
print(dataset.dir())