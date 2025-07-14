#include <reg51.h>
#include "header.h"



/*********** Uart Initializ **************/
void uart_init(s16 BAUD)
{

SCON|=0x50; 
TMOD|=0x20;

	switch(BAUD)
	{
		case 4800:TH1=250;
					break;
		case 7200:TH1=252;
					break;
		case 9600:TH1=253;
					break;
		case 14400:TH1=254;
					break;
		case 28800:TH1=255;
					break;
		case 57600:TH1=255;
					PCON=0x80;
					break;
	}

 TR1=1;

}



/*********** Uart Transmiting data **************/
void uart_tx(u8 CH)
{

SBUF=CH;
	while(TI==0);
	TI=0;

}



/*********** Uart Reciving data **************/
u8 uart_rx()
{

   while(RI==0);
RI=0;

return SBUF;

}


/*********** Uart Transmiting String **************/
void uart_string(u8 *US)
{

	while(*US)
	{
		uart_tx(*US++);
	}
	
}



/*********** Uart Integer Print On Serial Terminal**************/
// void uart_integer(s32 UINT) 
// {
// 	s32 TEMP,SUM2;
// 	u8 COUNT2;
//
// if(UINT<0)
// {
// 	uart_tx('-');
// 	UINT=-UINT;
// }	
//
// if(UINT==0)
// {
// 	uart_tx('0');
// 	return;
// }
// 		
// 			while(UINT)
// 			{
// 				COUNT2++;
// 				SUM2=SUM2*10+UINT%10;
// 				UINT=UINT/10;
// 			}
//
// 	
// 		for(SUM2;COUNT2;SUM2=SUM2/10,COUNT2--)
// 		{
// 			TEMP=SUM2%10;
// 			uart_tx(TEMP+48);
// 		}
// 	
// }


/*********** Uart Float Print On Serial Teminal **************/
// void uart_float(float FLOAT2)
// {
// s16 I;
// 	
// 	
// 	
// 	I=FLOAT2;
// 	
// // 	if(I<0)
// // 	{
// // 	uart_tx('-');
// // 	I=-I;
// // 	}

// 	if(I==0)
// 	{
// 	uart_integer(I);
// 	uart_tx('.');
// 	I=(FLOAT2-I)*100;
// 	uart_integer(I);
// 	}
// 	else if(I>0)
// 	{
// 	uart_integer(I);
// 	uart_tx('.');
// 	I=(FLOAT2-I)*100;
// 	uart_integer(I+1);
// 	}
// 	else if(I<0)
// 	{
// 	uart_integer(I);
// 	uart_tx('.');
// 	I=(I-FLOAT2)*100;
// 	uart_integer(I+1);
// 	}
// 	
// }



/************* uart ASCII Value Print On Terminal *************/
// void uart_ascii(u8 ASC)
// {
// 		uart_tx((ASC/100)+48);
// 		uart_tx((ASC/10)%10+48);
// 		uart_tx((ASC%10)+48);
// }



/*********** Uart Hex Valu Print On Serial Teminal **************/
// void uart_hex(u8 HEX)
// {
// s8 TEMP1,HEX2=HEX;
// 	
// 	uart_string("0x");
// 	
// 	
// /*---First Digit---*/
// 	TEMP1=HEX>>4;
// 	if(TEMP1>=10)
// 	{
// 	uart_tx(TEMP1+55);
// 	}
// 	else
// 	{
// 		uart_tx(TEMP1+48);
// 	}
// 	
// /*---Second Digit ---.................*/	
//    HEX2=(HEX2&15);
// 			if(HEX2>=10)
// 			{
// 				uart_tx(HEX2+55);
// 			}					
// 			else
// 			{
// 				uart_tx(HEX2+48);
// 			}
// 			
// }


/*********** Uart Octal Valu Print On Serial Teminal **************/
// void uart_octal(u8 OCT)
// {
// 	uart_tx('0');
// 		uart_tx((OCT/8)/8+48);
// 		uart_tx((OCT/8)%8+48);
// 		uart_tx((OCT%8)+48);
// }





/*********** Uart Rx String Print On LCD**********/
void uart_rx_string(u8 *buf,u8 lenth)
{

u8 i;
			for(i=0;i<lenth;i++)
			{
				buf[i]=uart_rx();
				
					if(buf[i]=='\r')
						break;
			}
			buf[i]='\0';

}


/*************** Uart Calculator One Digit *******************/
//void uart_calculator(u8 *BT1,u8 *BT2)
//{
// u8 op,buf[10],i;
// s8	n;
//
// uart_string("\r\nEnter Option...\r\n1)-\r\n2)+\r\n3)*\r\n4)/\r\n");
// op=uart_rx();
// 		
//		switch(op)
//		{
//			case 49:n=(BT1-48)-(BT2-48);
//					uart_string("\r\nANS:");
//					uart_tx(n+48);
//					break;
//		
//			case 50:n=(BT1-48)+(BT2-48);
//					uart_string("\r\nANS:");
//					for(i=0;n;n=n/10)
//					{
//						buf[i]=n%10;
//					}
//					buf[i]='\0';
//					uart_string(buf);
//					//uart_tx(n/10+48);
//					break;
//
//			case 51:n=(BT1-48)*(BT2-48);
//					uart_string("\r\nANS:");
//					
//					break;
//
//			case 52:n=(BT1-48)/(BT2-48);
//					uart_string("\r\nANS:");
//					uart_tx(n+48);
//					break;
				
//			default:uart_string("Unknow Opton...");
//					break;	
//		}
//
//
//}




/*************** Uart Calculator Multipal Digit *******************/
//void uart_calculator_multidigit(s32 T1,s32 T2)
//{
//
// s32 n,sum=0;
// u8 op,c=0;
// uart_string("\r\nEnter Option...\r\n1)-\r\n2)+\r\n3)*\r\n4)/\r\n");
// op=uart_rx();
// 		
//		switch(op)
//		{
//			case 49:n=(T1)-(T2);
//					uart_string("\r\nANS:");
//					while(n)
//					{
//						sum=sum*10+n%10;
//						if(sum==0)	 // 0 count
//						c++;
//						
//						n=n/10;
//					} 
//					for(sum;sum;sum=sum/10)
//					uart_tx(sum%10+48);
//					while(c)
//					{
//						uart_tx(0+48);
//						c--;
//					}
//					break;
//		
//			case 50:n=(T1)+(T2);
//					uart_string("\r\nANS:");
//					 while(n)
//					{
//						sum=sum*10+n%10;
//						if(sum==0)	 // 0 count
//						c++;
//						
//						n=n/10;
//					} 
//					for(sum;sum;sum=sum/10)
//					uart_tx(sum%10+48);
//					while(c)
//					{
//						uart_tx(0+48);
//						c--;
//					}
//					break;
//
//			case 51:n=(T1)*(T2);
//					uart_string("\r\nANS:");
//					while(n)
//					{
//						sum=sum*10+n%10;
//						if(sum==0)	 // 0 count
//						c++;
//						
//						n=n/10;
//					} 
//					for(sum;sum;sum=sum/10)
//					uart_tx(sum%10+48);
//					while(c)
//					{
//						uart_tx(0+48);
//						c--;
//					}
//					break;
//
//			case 52:n=(T1)/(T2);
//					uart_string("\r\nANS:");
//					while(n)
//					{
//						sum=sum*10+n%10;
//						if(sum==0)	 // 0 count
//						c++;
//						
//						n=n/10;
//					} 
//					for(sum;sum;sum=sum/10)
//					uart_tx(sum%10+48);
//					while(c)
//					{
//						uart_tx(0+48);
//						c--;
//					}
//					break;
//
//			default:uart_string("Unknown Option");
//		}
//
//
//}


