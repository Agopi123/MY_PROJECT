#include<reg51.h>
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;
void lcdcmd(unsigned char val);
void lcddat(unsigned char val);
void delay()
{
	unsigned int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<100;j++);
}
int main()
{
	    P2=0x00;
			while(1)
		{
			lcdcmd(0x38);
			delay();
			lcdcmd(0x01);
			delay();
			lcdcmd(0x10);
			delay();
		  lcdcmd(0x0c);
			delay();
			lcdcmd(0x80);
			delay();
			lcddat('V');
			delay();
			lcddat('i');
			delay();
			lcddat('j');
			delay();
			lcddat('a');
			delay();
			lcddat('y');
			delay();
			 lcdcmd(0xc0);
			delay();
			lcddat('g');
			delay();
			lcddat('o');
			delay();
			lcddat('p');
			delay();
			lcddat('i');
			delay();
		}
}
void lcdcmd(unsigned char val)
{
		P2=val;
	  rs=0;
		rw=0;
		en=1;
		delay();
		en=0;
}
void lcddat(unsigned char val)
{
		P2=val;
		rs=1;
		rw=0;
		en=1;
		delay();
   	en=0;
}
