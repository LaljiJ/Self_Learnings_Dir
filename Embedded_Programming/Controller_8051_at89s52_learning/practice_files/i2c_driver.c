#include <reg51.h>
#include "header.h"

sbit SDA=P2^0;
sbit SCL=P2^1;


/***********************************************/
void i2c_start()
{

	SCL=1;
	SDA=1;
	SDA=0;

}


/***********************************************/
void i2c_stop()
{

	SCL=0;
	SDA=0;
	SCL=1;
	SDA=1;

}



/***********************************************/
void i2c_write(u8 D)
{
  s8 i;
 
 
  for(i=7;i>=0;i--)
	{
		SCL=0;
		SDA=(D&(1<<i))?1:0;
		SCL=1;

	}
  
}




/***********************************************/
u8 i2c_read()
{
u8 TEMP=0x0;
s8 i;


for(i=7;i>=0;i--)
{
SCL=1;

if(SDA==1)
	TEMP|=(1<<i);

SCL=0;
}	

return TEMP;

}



/***********************************************/
void i2c_ack()
{ 

	SCL=0;
	SDA=1;
	SCL=1;
	while(SDA==1);
	SCL=0;

}



/***********************************************/
void i2c_noack()
{

	SCL=0;
	SDA=1;
	SCL=1;

}




/********************** Impliment I2C Data Fream *******************************/




/*-------- I2C write data frame ----------*/
void i2c_device_write(u8 SA,u8 MR,u8 DATA)
{
	
	i2c_start();
	i2c_write(SA);
	i2c_ack();
	i2c_write(MR);
	i2c_ack();
	i2c_write(DATA);
	i2c_ack();
	i2c_stop();

}


/*-------- I2C read data frame ----------*/
u8 i2c_device_read(u8 SA,u8 MR)
{

u8 TEMP2;
	
	i2c_start();
	i2c_write(SA);
	i2c_ack();
	i2c_write(MR);
	i2c_ack();
	i2c_start();
	i2c_write(SA|1);
	i2c_ack();
	TEMP2=i2c_read();
	i2c_noack();
	i2c_stop();

return TEMP2;


}

