//Obliczanie stopni geograficznych
//Zadanie 3/118 z książki Język C++ Stephen Prata
#include <iostream>

double Obliczanie(double stop, double min, double sek);

int main()
{
    double stopnie, minuty, sekundy;
    
std::cout<<"Podaj długość w stopniach, minutach i sekudach: \n";
std::cout<<"Najpierw podaj stopnie: \n";
std::cin>>stopnie;
std::cout<<"Następnie podaj minuty stopnia łuku: \n";
std::cin>>minuty;
std::cout<<"Na koniec podaj sekundy łuku: \n";
std::cin>>sekundy;

Obliczanie (stopnie, minuty, sekundy);
    
    return 0;
}

double Obliczanie(double stop, double min, double sek)
{
 
    const double minuta = 60;
    const double sekunda = 3600;
    double wynikMIN, wynikSEK, wynikMINSEK;
    
    wynikMIN = min / minuta;
    wynikSEK = sek / sekunda;
    wynikMINSEK = stop + wynikMIN + wynikSEK;
    
    std::cout<<stop<<" stopni, "<<min<<" minut, "<<sek<<" sekund = "<<wynikMINSEK<<" stopni\n";
    return 0;
}
