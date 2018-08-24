//przeliczanie lat świetlnych na jednostki astronoczmiczne
#include <iostream>
using namespace std;

double lata;

float jednostka (double la1)
{
       return la1=(lata*63240);
}

int main()
{
cout <<"Podaj liczbe lat swietlnych: ";
cin >>lata;
cout<<lata<< " Lat swietlnych = "<< jednostka (lata)<<" jednostek astronomicznych"<<endl;
    return 0;
}
