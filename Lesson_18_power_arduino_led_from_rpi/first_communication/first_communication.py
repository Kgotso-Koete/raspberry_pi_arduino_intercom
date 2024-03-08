# !usr/bin/env python 3
import serial
import time

while True:
	try:
		ser = serial.Serial("/dev/ttyACM0", 115200, timeout = 1.0)
		print("Scuccessfully connected to Serial")
		break
	except serial.SerialException:
		print("Could not connect to Serial. Try again")
		time.sleep(1)
	
time.sleep(3)
ser.reset_input_buffer()
print("Serial OK")

try:
	while True:
		# send message to arduino every 1 second 
		#time.sleep(3)
		#print("Send on message to Arduino");
		#ser.write("on\n".encode('utf-8'))
		#time.sleep(3)
		#print("Send off message to Arduino");
		#ser.write("off\n".encode('utf-8'))
		user_input = input("Select 'on' or  'off' : ")
		if user_input in ["on", "off"]:
			print("Send command to Arduino: " + user_input)
			str_to_send = user_input + "\n"
			ser.write(str_to_send.encode('utf-8'))
except KeyboardInterrupt:
	print("Close Serial communication.")
	ser.close()


