#include "header.h"

void main()
{


u8 h,m,s,date,month,year,day;
uart_init(9600);
lcd_init();

/***************** Set RTC Time ******************/
i2c_device_write(0xD0,0X02,0x08);
i2c_device_write(0xD0,0X01,0x35);
i2c_device_write(0xD0,0X00,0x30);

i2c_device_write(0xD0,0X03,0x02);
i2c_device_write(0xD0,0X04,0x23);
i2c_device_write(0xD0,0X05,0x12);
i2c_device_write(0xD0,0X06,0x19);

while(1)
{
h=i2c_device_read(0xD0,0x02);
m=i2c_device_read(0xD0,0x01);
s=i2c_device_read(0xD0,0x00);
date=i2c_device_read(0xD0,0x04);
month=i2c_device_read(0xD0,0x05);
year=i2c_device_read(0xD0,0x06);
day=i2c_device_read(0xD0,0x03);

lcd_cmd(0x80);
lcd_data(h/16+48);
lcd_data(h%16+48);
lcd_data(':');
	
lcd_cmd(0x83);
lcd_data(m/16+48);
lcd_data(m%16+48);
lcd_data(':');

lcd_cmd(0x86);
lcd_data(s/16+48);
lcd_data(s%16+48);

lcd_cmd(0xC0);
lcd_data(date/16+48);
lcd_data(date%16+48);
lcd_data('/');

lcd_cmd(0xC3);
lcd_data(month/16+48);
lcd_data(month%16+48);
lcd_data('/');

lcd_cmd(0xC6);
lcd_data(year/16+48);
lcd_data(year%16+48);

delay_ms(5);
}


}
