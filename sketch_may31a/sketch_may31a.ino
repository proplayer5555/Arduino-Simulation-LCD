#include <Ucglib.h>
#include <SPI.h>

char value1;
Ucglib_PCF8833_16x132x132_SWSPI ucg(/*sclk=*/ 13, /*data=*/ 11, /*cs=*/ 9, /*reset=*/ 8);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 delay(50);
  ucg.begin(UCG_FONT_MODE_TRANSPARENT);
  //ucg.begin(UCG_FONT_MODE_SOLID);
  ucg.clearScreen();
  ucg.setFont(ucg_font_ncenR12_tr);
}

void loop() {
  // put your main code here, to run repeatedly:
//ucg.setRotate90();
  while(!Serial.available());
  ucg.clearScreen();
  ucg.setColor(0, 255, 255);
  ucg.drawBox(0, 0, 132, 132);
  value1=Serial.read();
  if(value1=='A'){
  ucg.setColor(0, 0, 0);
  ucg.drawBox(0, 0, 132, 132);
  ucg.setColor(255, 255, 0); 
  ucg.setPrintPos(45,65);
  ucg.print("1695");
  }
  else if(value1=='B'){
  ucg.setColor(0, 255, 0);
  ucg.drawBox(0, 0, 39, 39); 
  }
  else if(value1=='0'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("0"); 
  }
  else if(value1=='1'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("1"); 
  }
  else if(value1=='2'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("2"); 
  }
  else if(value1=='3'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("3"); 
  }
  else if(value1=='4'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("4"); 
  }
  else if(value1=='5'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("5"); 
  }
  else if(value1=='6'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("6"); 
  }
  else if(value1=='7'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("7"); 
  }
  else if(value1=='8'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,125);
  ucg.print("8"); 
  }
  else if(value1=='9'){
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(120,115);
  ucg.print("9"); 
  }
  else{
  ucg.setColor(255, 255, 255);
  ucg.drawTriangle(51,78,80,78,66,54);
  }
 
  
}
