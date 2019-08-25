void setup() {
  Serial.begin(9600);
  Wire.begin();
  setupMPU();
  for (int i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT); 
    digitalWrite(i, 0); //positive pins
  }
  for (int i = 10; i < 18; i++)
  {
    pinMode(i, OUTPUT); 
    digitalWrite(i, 1); //-ve pins
  }
  
   digitalWrite(x1,1);
   digitalWrite(y1,0);
}
