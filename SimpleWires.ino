int no_of_wires = 0;
  randomize();
  no_of_wires = random(4)+3;
  char* color_of_wires[no_of_wires][6];
  for(int i=0; i<no_of_wires; i++)
  {
    int x = random(5);
    if(x==0) strcpy(color_of_wires[i],"red");
    else if (x==1) strcpy(color_of_wires[i], "blue");
    else if (x==2) strcpy(color_of_wires[i], "yellow)";
    else if (x==3) strcpy(color_of_wires[i], "white");
    else if (x==4) strcpy(color_of_wires[i], "black");
  }

int lastDigitOfSerial(char serial[6])
{
  int x = serial[5];
  return x;
}

int which_wire(int lastDigit) 
{
  int n; //n - wire to cut
  
  // For 3 wires
  if (no_of_wires==3)
  {
    int countBlue=0, countRed=0, countWhite=0;
    for(int i=0; i<5; i++)
    {
      if(strcmpi(color_of_wires[i], "blue")
        countBlue++;
      else if(strcmpi(color_of_wires[i], "red")
        countRed++;
      else if(strcmpi(color_of_wires[i], "white")
        countWhite++;
    }
    
    if(countRed==0)
      n=1;
    else if(strcmpi(color_of_wires[2], "white")==0)
      n=2;
    else if(countBlue>1)
      n=3;
    else n=4;
  }
  
  //For 4 wires
  if(no_of_wires == 4)
  {
    int countBlue=0, countRed=0, countYellow=0;
    for(int i=0; i<4; i++)
    {
      if(strcmpi(color_of_wires[i], "blue")
        countBlue++;
      else if(strcmpi(color_of_wires[i], "red")
        countRed++;
      else if(strcmpi(color_of_wires[i], "yellow")
        countYellow++;
    }
    
    if(countRed>1 && lastDigit%2!=0)
      n=5;
    else if((strcmpi(color_of_wires[3], "yellow")==0) && countRed==0)
      n=6;
    else if(countBlue==1)
      n=7
    else if(countYellow>1)
      n=8;
    else n=9;
  }
  
  //For 5 wires
  if(no_of_wires==5)
  {
    int countBlack=0, countRed=0, countYellow=0;
    for(int i=0; i<5; i++)
    {
      if(strcmpi(color_of_wires[i], "black")
        countBlack++;
      else if(strcmpi(color_of_wires[i], "red")
        countRed++;
      else if(strcmpi(color_of_wires[i], "yellow")
        countYellow++;
    }
      
    if((strcmpi(color_of_wires[4], "black")==0) && lastDigit%2!=0)
      n=10;
    else if(countRed==1 && countYellow>1)
      n=11;
    else if(countBlack==0)
      n=12;
    else n=13;
  }
  
  //For 6 wires
  if(no_of_wires==6)
  {
     int countWhite=0, countRed=0, countYellow=0;
    for(int i=0; i<6; i++)
    {
      if(strcmpi(color_of_wires[i], "white")
        countWhite++;
      else if(strcmpi(color_of_wires[i], "red")
        countRed++;
      else if(strcmpi(color_of_wires[i], "yellow")
        countYellow++;
    }
    
    if(countYellow==0 and lastDigit%2!=0)
      n=14;
    else if(countYellow==1 && countWhite>1)
      n=15;
    else if(countRed==0)
      n=16;
    else n=17;
  }
  return n;
}

int cut_wire_no(int n)
{
  int wireNo;
  if(n==1)
    wireNo=2;
  else if(n==2)
    wireNo = 3;
  else if(n==3)
  { 
    if(strcmpi(color_of_wires[2], "blue")==0)
      wireNo=3;
    else
      wireNo=2;
  }
  else if(n==4)
    wireNo=3;
  else if(n==5)
  {
    if(strcmpi(color_of_wires[3],"red"==0)
      wireNo=4;
    else if(strcmpi(color_of_wires[2],"red"==0)
      wireNo=3;
    else
      wireNo=2;
  }
  else if(n==6)
    wireNo=1;
  else if(n==7)
    wireNo=1;
  else if(n==8)
    wireNo=4;
  else if(n==9)
    wireNo=2;
  else if(n==10)
    wireNo=4;
  else if(n==11)
    wireNo=1;
  else if(n==12)
    wireNo=2;
  else if(n==13)
    wireNo=1;
  else if(n==14)
    wireNo=3;
  else if(n==15)
    wireNo=4;
  else if(n==16)
    wireNo=6;
  else if(n==17)
    wireNo=4;
    
  return wireNo;
}
