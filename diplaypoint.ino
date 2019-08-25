//MAGIC_SAM_ELECTRONICS
//Please Subscribe us and share this tutorial
//HTG***HTG****HTG****HTG

void displaypoint(char ch[])
{ 
       switch (ch[1])
        {
          case'1': randomeffect();show(_1,800); break;
          case'2': randomeffect();show(_2,800); break;
          case'3': randomeffect();show(_3,800); break;
          case'4': randomeffect();show(_4,800); break;
          case'5': randomeffect();show(_5,800); break;
          case'6': randomeffect();show(_6,800); break;
          case'7': randomeffect();show(_7,800); break;
          case'8': randomeffect();show(_8,800); break;
          case'9': randomeffect();show(_9,800); break;
          default: over();
       }  
}
void randomeffect()
{
    for(int a=0;a<2;a++)
     {
        show(random1,30);
        delay(40);
        show(random2,30);
        delay(40);
      }
}
void over()
{
  show(G,800);
  show(A,800);
  show(M,800);
  show(E,800);
  show(_,800);
  show(O,800);
  show(V,800);
  show(E,800);
  show(R,800);
}



void show( byte * image, unsigned long duration)//WE USE BYTE HERE
{
    unsigned long start = millis(); 
    while (start + duration > millis()) 
    {
      for(int row = 0; row < 8; row++)
      {
      digitalWrite(rowPins[row], HIGH); // connect row to +5 volts
      for(int column = 0; column < 8; column++)
      {
        boolean pixel = bitRead(image[row],column);
        if(pixel == 1)
           {
              digitalWrite(columnPins[column], LOW); // connect column to Gnd
          }
        delayMicroseconds(300); // a small delay for each LED
        digitalWrite(columnPins[column], HIGH); // disconnect column from Gnd
        }
        digitalWrite(rowPins[row], LOW); // disconnect LEDs
        }
    }
}
