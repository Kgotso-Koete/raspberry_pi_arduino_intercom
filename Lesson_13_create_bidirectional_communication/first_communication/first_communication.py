# !usr/bin/env python 3
import serial
import time

ser = serial.Serial("/dev/ttyACM0", 115200, timeout = 1.0)
time.sleep(3)
ser.reset_input_buffer()
print("Serial OK")

try:
	while True:
		# send message to arduino every 1 second
		time.sleep(1)
		print("Send message to Arduino");
		ser.write("Hello from Raspberry Pi\n".encode('utf-8'))
		
		# wait to receive data
		while ser.in_waiting <= 0:
			time.sleep(0.01)
		response = ser.readline().decode('utf-8').rstrip()
		print(response)
except KeyboardInterrupt:
	print("Close Serial communication.")
	ser.close()


