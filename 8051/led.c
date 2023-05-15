#include<reg51.h>
sbit LED1=P1^0;
sbit LED2=P1^1;
sbit LED3=P1^2;
sbit LED4=P1^3;
sbit LED5=P1^4;
sbit LED6=P1^5;
sbit LED7=P1^6;
sbit LED8=P1^7;
void delay(unsigned int x)
{
	unsigned int i;
	for(i=0;i<x;i++)
	{
	}
}
int main()
{   while(1)
	{
	LED1=LED3=LED5=LED7=1;
		LED2=LED4=LED6=LED8=0;
		delay(1000000);
	LED2=LED4=LED6=LED8=1;
		LED1=LED3=LED5=LED7=0;
		delay(1000000);
	}
	
}







