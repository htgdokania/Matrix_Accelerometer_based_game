
void decide()
{
  int x=map(gForceY,-50,+50,2,9);
  int y=map(gForceX,50,-50,10,17);
  Serial.println("x=  ");
  Serial.print(x);
  Serial.println("y=  ");
  Serial.print(y);
  if(x==x1 && y==y1)
  {
    displaypoint(point);
    point[1]++;
    if(point[1]>':')
      point[1]='1';
    Serial.println("success");
    //delay(2000);
    
    for(int k=2;k<10;k++)
    {
      digitalWrite(k,0);
    }
    
    for(int k=10;k<18;k++)
    {
      digitalWrite(k,1);
    }
  
    x1=(random(2000)+x1)%8 +2;
    y1=(random(3000)+y1)%8 +10;
    digitalWrite(x1,1);
    digitalWrite(y1,0);
  }
  else
    {
      digitalWrite(x,1);
      digitalWrite(y,0);
      delay(100);//refresh time 
      digitalWrite(x,0);
      digitalWrite(y,1);
    }

}
