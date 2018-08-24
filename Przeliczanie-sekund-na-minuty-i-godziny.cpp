//Przeliczanie sekund na minuty,godziny i dni.
//Zadanie 4/119 z książki Język C++ Stephen Prata

#include <iostream>

    const int minuta = 60;
    const int godzina = 3600;
    const int doba = 86400;
    const int rok = 31536000;
    long long sekundy;
    
    int ileDni, ileGodzin, ileMinut, ileSekund;
    int resztaDni, resztaGodzin, resztaMinut, resztaSekund;

long long Oblicz(long long sek);

int main()
{

    std::cout<<"Podaj liczbę sekund: :\n";
    std::cin>>sekundy;
    
    Oblicz (sekundy);
            
    return 0;
}

long long Oblicz(long long sek)
{
     ileDni = sekundy / doba;
    resztaDni = sekundy % doba;
    
    ileGodzin = resztaDni / godzina;
    resztaGodzin = resztaDni % godzina;
    
    ileMinut = resztaGodzin / minuta;
    resztaMinut = resztaGodzin % minuta;
    
    ileSekund = resztaMinut;
    
    std::cout<<sekundy<<" sekund to: "<<ileDni<<" dni "<<ileGodzin<<" godzin "<<ileMinut<<" minut "<<ileSekund<<" sekund.";
    return 0;
}
