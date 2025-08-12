/*
WAP to find addition of matrix and store the results in third matrix.
NOTE: scand roe and colum from user.
*/

#include<iostream>
using namespace std;
main()
{
int r,c;
cout << "enetr the row & colum" << endl;
cin >> r >> c;
//int n;
//cout << "enetr n" << endl;
//cin >> n;
///////////////////////////////
int **p1,**p2;
int i,j;

p1=new int*[r];
for(i=0;i<r;i++)
p1[i]=new int[c];

p2=new int*[r];
for(i=0;i<r;i++)
p2[i]=new int[c];
///////////////////////////////
//int r,c;

//c/ut << "enetr the row & colum" << endl;
//cin >> r >> c;

cout << "enetr the 1 matrix element..." << endl;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	cin >> p1[i][j];
}

cout << "enetr the 2 matrix element..." << endl;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	cin >> p2[i][j];
}
////////////////////////////////////
cout << " first matrix " << endl;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	cout << p1[i][j] << " ";
	cout << endl;
}

cout << " second matrix " << endl;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	cout <<  p2[i][j] << " ";
	cout << endl;
}
///////////////////////////////////////////
int k;
int **p3;

p3=new int*[r];
for(i=0;i<r;i++)
p3[i]=new int[c];


for(i=0;i<r;i++)
for(j=0;j<c;j++)
for(k=0;k<c;k++)
p3[i][j]=p3[i][j]+p1[i][k]*p2[k][j];
//p3[i][j]+=p1[i][k]*p2[k][j];








/*
int **p1,**p2;

p1=new int*[5];
for(int i=0;i<5;i++)
p1[i]=new int[5];

p2=new int*[5];
for(int i=0;i<5;i++)
p2[i]=new int[5];




p1[0][0]=2;
p1[0][1]=5;
p1[0][2]=3;
p1[1][0]=1;
p1[1][1]=2;
p1[1][2]=3;
p1[2][0]=3;
p1[2][1]=2;
p1[2][2]=5;

p2[0][0]=2;
p2[0][1]=1;
p2[0][2]=4;
p2[1][0]=3;
p2[1][1]=2;
p2[1][2]=1;
p2[2][0]=1;
p2[2][1]=2;
p2[2][2]=3;

int i,j;

cout << "matrix 1" << endl;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	cout << p1[i][j] << " ";
	cout << endl;
}

cout << "matrix 2" << endl;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	cout << p2[i][j] << " ";
	cout << endl;
}
*/

//////////////////////////////////////////////
/*
int n=5,r=3,c=3;
*/

/////////////////////////////////////////////
/*
int **p3;

p3=new int*[n];
for(i=0;i<n;i++)
p3[i]=new int[n];

for(i=0;i<1;i++)
{
	for(j=0;j<1;j++)
	{
		p3[i][j]=  p1[i][j]*p2[i][j]  +  p1[i][j+1]*p2[i+1][j]  +  p1[i][j+2]*p2[i+2][j];
		p3[i][j+1]=  p1[i][j]*p2[i][j+1]  +  p1[i][j+1]*p2[i+1][j+1]  +  p1[i][j+2]*p2[i+2][j+1];
		p3[i][j+2]=  p1[i][j]*p2[i][j+2]  +  p1[i][j+1]*p2[i+1][j+2]  +  p1[i][j+2]*p2[i+2][j+2];
	}
}

for(i=1;i<2;i++)
{
	for(j=0;j<1;j++)
	{
		p3[i][j]=  p1[i][j]*p2[i-1][j]  +  p1[i][j+1]*p2[i][j]  +  p1[i][j+2]*p2[i+1][j];
		p3[i][j+1]=  p1[i][j]*p2[i-1][j+1]  +  p1[i][j+1]*p2[i][j+1]  +  p1[i][j+2]*p2[i+1][j+1];
		p3[i][j+2]=  p1[i][j]*p2[i-1][j+2]  +  p1[i][j+1]*p2[i][j+2]  +  p1[i][j+2]*p2[i+1][j+2];
	}

}

for(i=2;i<3;i++)
{
	for(j=0;j<1;j++)
	{
		p3[i][j]=  p1[i][j]*p2[i-2][j]  +  p1[i][j+1]*p2[i-1][j]  +  p1[i][j+2]*p2[i][j];
		p3[i][j+1]=  p1[i][j]*p2[i-2][j+1]  +  p1[i][j+1]*p2[i-1][j+1]  +  p1[i][j+2]*p2[i][j+1];
		p3[i][j+2]=  p1[i][j]*p2[i-2][j+2]  +  p1[i][j+1]*p2[i-1][j+2]  +  p1[i][j+2]*p2[i][j+2];
	}

}
*/
//////////////////////////////////////////////
cout << "## third matrix ##" << endl;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	cout << p3[i][j] << " ";
	cout << endl;
}


}
