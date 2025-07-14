#include <reg51.h>
#include "header.h"

//extern u8 a[12],i;
extern u8 a[12],i;
/********************* UART Interrupt Enable ************************/
void en_uart_interrupt()
{
	EA=ES=1;
}

/********************* UART ISR ************************/
void UART_Handeler(void) interrupt 4
{
if(RI==1)
{
RI=0;
a[i]=SBUF;
uart_tx(a[i++]);
}


//if(RI==1)
//{
//RI=0;
//a[i]=SBUF;
//uart_tx(a[i++]);

}
		
		
	





/********************* Uart Interrupt Enabel ************************/
// void uart_init()
// {

// 	SCON=0x50; 
// 	TMOD|=0x20;
// 		TH1=253;
// 		TR1=1;
// 	EA=ES=1;
// 		
// }