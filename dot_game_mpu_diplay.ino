
#include <Wire.h>

long accelX, accelY, accelZ;
float gForceX, gForceY, gForceZ;
int x1=8;
int y1=16;
char point[2] ="_1";

const int rowPins[] = { 9,8,7,6,5,4,3,2};//THESE ARE THE +ve TERMINALS OF THE LEDs
const int columnPins[] = { 10,11,12,13,14,15,16,17};//THESE ARE THE -ve TERMINALS 

void decide();
void displaypoint(char ch[]);
void randomeffect();
void show(byte, unsigned long);
