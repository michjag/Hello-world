#include <iostream>
#include <cmath>

using namespace std;

double a,b,c,d,e,najbl,srednia;

int main()
{
cout <<"Podaj piec liczb"<<endl;

cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;

srednia=(a+b+c+d+e)/5;
cout<<srednia<<endl;

 najbl=a;
    if(abs(srednia-b)<(srednia-a)) najbl=b;
    if(abs(srednia-c)<(srednia-najbl)) najbl=c;
    if(abs(srednia-d)<(srednia-najbl)) najbl=d;
    if(abs(srednia-e)<(srednia-najbl)) najbl=e;

cout<<"Liczba najblizsza sredniej: "<<najbl<<endl;

    return 0;
}
