#include <lpc214x.h>
void delay(unsigned int count);
int main() {
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR0|=(0x01<<6);
	IODIR0|=(0x01<<5);
	IODIR0|=(0x01<<3);
	IODIR0|=(0x01<<4);
	IODIR0|=(0x01<<7);
	IODIR0|=(0x01<<8);
	IODIR0|=(0x01<<9);//set direction as output
if((0x01<<16)&IOPIN1){
  // Set P0.10 as output

	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 6);
	IOCLR0 |= (1 << 7);
	IOCLR0 |= (1 << 8);
	IOCLR0 |= (1 << 9);

	
	delay(400000);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 6);
	IOCLR0 |= (1 << 5);
	delay(400000);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOCLR0 |= (1 << 7);
	delay(400000);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 6);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	
	delay(400000);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 9);
  delay(400000);
  IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOCLR0 |= (1 << 6);
	IOCLR0 |= (1 << 7);
	IOCLR0 |= (1 << 8);
	IOCLR0 |= (1 << 9);
  delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 9);
	IOCLR0 |= (1 << 6);
	IOCLR0 |= (1 << 7);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	IOCLR0 |= (1 << 9);
	delay(400000);
	
}
}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}