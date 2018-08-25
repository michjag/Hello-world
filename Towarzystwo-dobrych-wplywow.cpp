/*
Przygotuj program śledzący wpływy na konto Towarzystwa na Rzecz Zachowania Dobrych Wpływów. 
Użytkownik ma być pytany o liczbę wpłacających, a następnie prosić o podnie wpłaty każdego donatora. 
Informacje należy umieścić w dynamicznie alokowanej tablicy struktur. Każda struktura ma mieć dwa pola:
tablicę znakową (lub obiekt klasy string) na nazwisko oraz pole typu double na kwotę. Po odczytaniu wszystkich
danych program ma pokazać nazwiska i wpłaty wszystkich, którzy dali przynajmniej 10000 zł. 
Lista ta ma mieć nagłówek Nasi Wspalniali Sponsorzy. Dalej program ma pokazać listę pozostałych ofiarodawców,
tym razem z nagłówkiem Nasi Sponsorzy. Jeśli w którejś z kategorii zabraknie nazwisk, program ma wyświetlić słowo brak.
Sponsorzy mają być podzieleni na dwie opisane grupy, ale w ramach tych grup nie należy już ich nijak sortować.
*/

#include <iostream>
#include <string>
using namespace std;
int ile;

struct wplaty
{
    string nazwisko;
    double kwota;
};

int main()
{
cout<<"Wpływy na konto Towarzystwa na Rzecz Zachowania Dobrych Wpływów\n";
cout<<"Podaj liczbę wpłacających:\n";
cin>>ile;

wplaty Tablica[ile];
cout<<endl;
cout<<"Podaj nazwisko donatora i kwotę wpłaty: \n";
for (int i = 0; i < ile; i++)
{
    cin>>Tablica[i].nazwisko;
    cin>>Tablica[i].kwota;
}
cout<<endl;

int myk = 0;

cout<<"Nasi wspaniali sponsorzy: \n";
for (int i = 0; i < ile; i++)
{
    if ((Tablica[i].kwota) >= 10000)
    {
    cout<<Tablica[i].nazwisko<<" "<<Tablica[i].kwota<<" zł\n";
        myk++;
    }
}
if (myk == 0)
    cout<<"Brak \n";
    
cout<<endl;

int myk2 = 0;

cout<<"Nasi sponsorzy: \n";
for (int i = 0; i < ile; i++)
{
    if ((Tablica[i].kwota) < 10000)
    {
    cout<<Tablica[i].nazwisko<<" "<<Tablica[i].kwota<<" zł\n";
    myk2++;    
    }

}

if(myk2 == 0)
    cout<<"Brak \n";

    return 0;
}
