# !usr/bin/env python 3
import serial
import time

ser = serial.Serial("/dev/ttyACM0", 115200, timeout = 1.0)
time.sleep(3)
ser.reset_input_buffer()
print("Serial OK")
ser.close()
