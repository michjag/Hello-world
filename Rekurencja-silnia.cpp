//Obliczanie silni rekurencyjnie
#include <iostream>
 
long long silnia(int sil);

int main()
{
    int liczba;
    std::cout << "Podaj liczbę \n";
    
    while (std::cin>>liczba)
    {
    std::cout <<"Wynik: " << silnia(liczba) << std::endl;
    std::cout << "\nPodaj liczbę ('q' aby zakończyć)\n";
    }
    
    return 0;
}

long long silnia(int sil)
{
 long long wynik = 1;
 
 if (sil >= 2)
 {
 wynik = sil * silnia(sil - 1);     
 }
     return wynik;
 
 if (sil < 2)
     return 1;
}
// 5/336
