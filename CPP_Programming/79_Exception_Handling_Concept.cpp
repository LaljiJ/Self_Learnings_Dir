#include <iostream>
using namespace std;
void care(void);
void company(void);
void ambani(void);

main()
{

try
{
cout << "user using n/w" << endl;
sleep(3);

cout << "problem accures" << endl;
cout << "call customare care" << endl;

care();
}
catch(const char *s3)
{
cout << "in main---> " << s3 << endl;
}

}

void care()
{
cout << "i am customaer care" << endl;
cout << "how can i help you" << endl;
sleep(3);
cout << "i am not able to solve prob" << endl;
cout << "forword to company" << endl;
sleep(3);
try
{
company();
}
catch(const char *s1)
{
cout << "in care---> " << s1 << endl;
throw s1;
}

}

void company()
{
cout << "hii i am jio" << endl;
cout << "forword to ambani" << endl;
sleep(3);
cout << "forword done" << endl;
try
{
ambani();
}
catch(const char *s)
{
cout << "in company---> " << s << endl;
throw s;
}


}


void ambani()
{
cout << "hi gujarati" << endl;
cout << "nathi kari devo solve" << endl;
throw "not not not";
}

