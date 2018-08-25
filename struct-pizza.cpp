//Struktura pizza
#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string marka;
    int srednica;
    int waga;
};

int main()
{
    Pizza jeden;
    {
cout<<"Podaj marke: "<<endl;
getline (cin, jeden.marka);
cout<<"Podaj srednice: "<<endl;
cin>>jeden.srednica;
cout<<"Podaj wage: "<<endl;
cin>>jeden.waga;
    };

cout<<"Marka "<<jeden.marka<<endl;
cout<<"Srednica: "<<jeden.srednica<<endl;
cout<<"Waga: "<<jeden.waga<<endl;

   return 0;

}
