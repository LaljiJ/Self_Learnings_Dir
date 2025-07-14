/*
3.Write a C++ program to find the area of rectangle, triangle, and sphere using function Overloading.
*/

/*
rectangle:   area=lenth*widht
triangle :  area=1/2*width*height
sphere  : 4 pie rsquar
*/

#include<iostream>
#define pie 3.14
using namespace std;
int area(int,int);
int area(float,int,int);
float area(int,float,int);
/////////////////////////////////
main()
{
int len,wid,rec;

cout << "enter the ractangle  len & wid" << endl;
cin >> len >> wid;

rec=area(len,wid);
cout << "rectangale area -- " << rec << endl;

cout << "-------------------------------" << endl;
///////////////////////////////////////////////
int hig,tri;
float f=0.5;

cout << "enter the traingle wid & hig" << endl;
cin >> wid >> hig;

tri=area(f,wid,hig);
cout << "traingle area -- " << tri << endl;

cout << "-------------------------------" << endl;
///////////////////////////////////////
int r;
float spe;

cout << "enter the sphere data r" << endl;
cin >> r;

spe=area(4,pie,r);
cout << "sphere area -- " << fixed << spe << endl;

cout << "-------------------------------" << endl;
}
///////////////////////////////////
int area(int l,int w)
{
int rec;
		
	
	rec=l*w;
	return rec;
	
}
/////////////////////////////////

int area(float f1,int w,int h)
{
int tri;
	tri=(f1)*(w*h);
	return tri;
}
//////////////////////////////////////
float area(int o1,float o2,int o3)
{
float spe;
	spe=o1*pie*(o3*o3);
	return spe;
}

