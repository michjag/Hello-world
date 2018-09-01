#include <iostream>

double srednia_harm(double pierwsza, double druga);

int main()
{
double liczba1, liczba2;

    do
     {
    std::cout<<"Podaj dwie liczby: ('0' kończy podawanie) \n";
    std::cin>>liczba1>>liczba2;
    std::cout<<"Średnia harmoniczna to: \n";
    std::cout<<srednia_harm(liczba1, liczba2)<<std::endl;
    
     if((liczba1 == 0)||(liczba2 == 0))
         std::cout<<"Do widzenia!\n";
         
    }
    while (liczba1 && liczba2 != 0);
    
    return 0;
}

double srednia_harm(double pierwsza, double druga)
{
    double wynik_funkcja;

    wynik_funkcja = 2.0 * pierwsza * druga / (pierwsza + druga);
    
    return wynik_funkcja;
}
