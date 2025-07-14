/*
Understand user define datatype 
*/

#include<stdio.h>

/*
// first way to nested structure
struct std{
    char ch;
    int i;
    float f;
};

struct datetable{
    int date;
    int month;
    int year;
    struct std one;
    struct std two;
};
*/

struct std{
char ch;
int i;
float f;
    struct date{
        int date;
        int month;
        int year;
    }dob,doj;
};

int main(void){

    struct std var;

    var.ch = 'a';
    var.i = 10;
    var.f = 23.5;
    var.dob.date = 1;
    var.doj.year = 2000;

}