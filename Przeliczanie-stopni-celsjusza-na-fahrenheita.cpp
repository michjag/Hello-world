//Przeliczanie stopni celsjusza na fahrenheita
#include <iostream>
using namespace std;

double celc;

float temperatura (double c)
{
       return c=(1.8*celc+32);
}

int main()
{
cout <<"Podaj temperature w stopniach celsjusza: ";
cin >>celc;
cout<<celc<< " stopnie Celsjusza to "<< temperatura (celc)<<" stopnie fahrenheita"<<endl;
    return 0;
}
