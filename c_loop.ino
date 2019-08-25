
void loop() {
  setupMPU();
  //next 4 lines just to refresh the sensor
  Wire.beginTransmission(0b1101000); //This is the I2C address of the MPU (b1101000/b1101001 for AC0 low/high datasheet sec. 9.2)
  Wire.write(0x6B); //Accessing the register 6B - Power Management (Sec. 4.28)
  Wire.write(0b00000000); //Setting SLEEP register to 0. (Required; see Note on p. 9)
  Wire.endTransmission();  

  recordAccelRegisters();
  decide();
  
   digitalWrite(x1,1);
   digitalWrite(y1,0);
}
