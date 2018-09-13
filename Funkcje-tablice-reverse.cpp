#include <iostream>
#include <algorithm>

int ile = 10;
double fill_array(double tab[], int ile_wynikow);
void show_array(double tab[],  int ile_wynikow);
double reverse_array(double tab[],  int ile_wynikow);

int main()
{
double tablica[ile];

int rozmiar_tablicy = fill_array (tablica, ile);
    
//std::cout <<"ROZMIAR tablicy: " <<  rozmiar_tablicy << std::endl; 
tablica[ile] = tablica[rozmiar_tablicy];
std::cout << std::endl;

show_array (tablica, rozmiar_tablicy);
std::cout << std::endl;
reverse_array (tablica, rozmiar_tablicy);

std::cout << "Po odwróceniu: \n";
show_array (tablica, rozmiar_tablicy);

return 0;
}

double fill_array(double tab[], int ile_wynikow)
{
    int i;
    double temp;
    
    for ( i = 0; i < ile; i++)
    {
        std::cout << "Podaj " << (i + 1) << " wynik ('q' kończy wprowadzanie)\n";
        std::cin>>temp;
        
        if (!std::cin)
     {
         std::cin.clear();
         while (std::cin.get() != '\n')
             continue;
         std::cout<<"Złe dane, przerwanie wprowadzania\n";
         return i;
     }
     
     tab[i] = temp;
    }
    
    return i;
}

void show_array(double tab[],  int ile_wynikow)
{
    for (int i = 0; i < ile_wynikow; i++)
    {
        std::cout<<i + 1 << ". " <<  tab[i] << std::endl;
    }
}

double reverse_array(double tab[],  int ile_wynikow)
{
std::reverse( tab, tab + ile_wynikow );
    return 0;
}

// 6/336
