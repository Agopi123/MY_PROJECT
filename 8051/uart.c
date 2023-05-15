#include<reg51.h>
 void init_uart(void);
char uart_tx(char);
	 
 int main()
 {
			init_uart();
	 while(1)
	 uart_tx('P');
	   
 }
 
void init_uart()
{
		SCON=0x50;
		TMOD=0x20;
		TH1=253; // baud rate
	   TR1=1; // transmitt run
}

char uart_tx(char ch)
{
		while(1)
		{	
	   SBUF=ch;
	    while(TI==0);
			TI==0;
		}
}
