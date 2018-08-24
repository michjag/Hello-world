//Zadanie z kursu p. Mirosława Zelenta - ile można zakupić krążowników w Ogame posiadając określoną liczbę surowców.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long int metal, krysztal, deuter;
long int metal_n,krysztal_n,deuter_n;
long int ilosc;

int main()
{
 cout <<"Witaj w programie zakupu krazownikow w Ogame"<<endl;
 cout <<"Cena zakupu jednego krazownika:"<<endl;
 cout <<"Metal: 20000"<<endl;
 cout <<"Krysztal: 7000"<<endl;
 cout <<"Deuter: 2000"<<endl;
 cout <<"<------------------------------------------>"<<endl;
 cout <<"Podaj ile masz metalu: "<<endl;
 cin >> metal;
 cout <<"Podaj ile masz krysztalu: "<<endl;
 cin >> krysztal;
 cout <<"Podaj ile masz deuteru: "<<endl;
 cin >> deuter;

 if ((metal<0)||(krysztal<0)||(deuter<0))
    cout<<"Niepoprawne dane!";

 else
{

 metal_n=(metal/20000);
 krysztal_n=(krysztal/7000);
 deuter_n=(deuter/2000);

 if ((metal_n<=krysztal_n)&&(metal_n<=deuter_n))
    ilosc=metal_n;

 if ((krysztal_n<=metal_n)&&(krysztal_n<=deuter_n))
    ilosc=krysztal_n;

 if ((deuter_n<=metal_n)&&(deuter_n<=krysztal_n))
    ilosc=deuter_n;

 if ((metal_n<=0)||(krysztal_n<=0)||(deuter_n<=0))
 cout<<"Nie stac Cie na nowe statki!";

 else
 cout <<"Mozesz zakupic: "<<trunc(ilosc)<<" krazownikow" <<endl;

}

    return 0;
}
