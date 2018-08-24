//Spalanie samochodu na 1 km
#include <iostream>

using namespace std;

double km, benz,spalanie;

int main()
{
cout <<"Podaj ile km przejechano: ";
cin >>km;
cout <<"Podaj ile benzyny zuzyto w l: ";
cin >> benz;

spalanie=benz/(km/100);

cout <<"Samochod zuzyl: "<<spalanie<<" litrow na 100 km"<<endl;
cout <<"Samochod zuzyl: "<<benz/km<<" litrow na 1 km"<<endl;

cin.get();

return 0;
}
