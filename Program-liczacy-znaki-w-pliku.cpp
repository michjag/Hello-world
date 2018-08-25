//Program otwierający plik tekstowy, wczytujący go znak po znaku do końca, a następnie podający liczbę znaków w tym pliku.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
string nazwa;    
ifstream plik;
    
cout<<"Podaj nazwę pliku do otwarcia\n";
cin>>nazwa;

plik.open(nazwa);

if(!plik.is_open())
{
    cout<<"Nie udało się otworzyć pliku: "<<nazwa;
    exit(EXIT_FAILURE);
}

string znaki;
int licznik = 0;

while(plik.good())
{
    (getline(plik, znaki));
   cout<<znaki<<endl;
    licznik += znaki.length();
}
cout<<endl<<"Liczba znaków w pliku: "<<licznik;
 
plik.close();
return 0;
}
