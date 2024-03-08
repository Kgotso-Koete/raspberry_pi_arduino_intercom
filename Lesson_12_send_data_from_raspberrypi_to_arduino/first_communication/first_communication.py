# !usr/bin/env python 3
import serial
import time

ser = serial.Serial("/dev/ttyACM0", 115200, timeout = 1.0)
time.sleep(3)
ser.reset_input_buffer()
print("Serial OK")

try:
	while True:
		time.sleep(1)
		print("Send message ro Arduino");
		ser.write("Hello from Raspberry Pi\n".encode('utf-8'))
except KeyboardInterrupt:
	print("Close Serial communication.")
	ser.close()


