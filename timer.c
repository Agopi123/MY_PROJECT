#include<reg51.h>
void delay(void)
{
	TMOD=0X01; //TIMER0 IN MODE1
	TH0=0XEE;  //MSB OF 16BIT TIMER0 
	TL0=00;    //LSB OF 16 BIT TIMER1
	TR0=1;     //TIMER RUN BIT =1 ,TIMER START
	while(TF0==0);  // TIMER FLAG BIT=0
	TR0=0;         // TIMER RUN BIT=0 ,TIMER STOP 
	TF0=0;         // TIMER RESET 
	
}

int main()
{  
	while(1)
	{
		P1=0X55;  // P1=0b01010101
		delay();
		P1=0XAA;  // P1=0b10101010
		delay();
	}
	
	return 0;
}

