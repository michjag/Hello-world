#include <iostream>

const int najwiecej = 10;

double wprowadzanie (double wyniki[], int ile_wynikow);
void wyswietlanie(const double wyniki[], int n);
void srednia(double tablica[], int n);

int main()
{
double wprowadz[najwiecej];

int rozmiar = wprowadzanie(wprowadz, najwiecej);
wyswietlanie(wprowadz, rozmiar);
srednia (wprowadz, rozmiar);
    
    return 0;
}

double wprowadzanie (double wyniki[], int ile_wynikow)
{
 double temp;
 int i;
 
 for (i = 0; i < najwiecej; i++)
 {
     std::cout<<"Podaj "<<(i + 1)<<" wynik golfowy ('q' aby zakończyć): ";
     std::cin>>temp;

     if (!std::cin)
     {
         std::cin.clear();
         while (std::cin.get() != '\n')
             continue;
         std::cout<<"Złe dane, przerwanie wprowadzania\n";
         break;
     }
     else if (temp < 0)
         break;
     
     wyniki[i] = temp;
 }
 return i;
}

void wyswietlanie(const double wyniki[], int n)
{
   std::cout<<"Wprowadzone wyniki golfowe: ";
   
 for (int i = 0; i < n; i++)
    std::cout<<wyniki[i]<<", ";
}

void srednia(double tablica[], int n)
{
    double suma = 0;
    double srednia_obl = 0;
    std::cout<<"Średnia z "<<n<<" wyników: \n";
    for (int i = 0; i < n; i++)
        suma += tablica[i];
    
    srednia_obl = suma / n;
    std::cout<<srednia_obl<<std::endl;
}

// 2/336
