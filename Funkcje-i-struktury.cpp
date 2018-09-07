#include <iostream>
#include <string>

struct pudlo
{
    std::string producent;
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

pudlo box = {"kartonex", 10, 20, 30, 0};
pudlo box2 = {"paczka", 30, 35, 40, 0};

void wyswietlanie(pudlo pokaz);
pudlo obliczanie (pudlo oblicz);
pudlo polowa (pudlo * oblicz);

int main()
{

std::cout<<"box: \n";
wyswietlanie(box);
std::cout<<"\nbox2: \n";
wyswietlanie(box2);

std::cout<<"\nObliczanie objętości box: \n";
box = obliczanie(box);
wyswietlanie(box);

std::cout<<"\nObliczanie objętości box2: \n";
box2 = obliczanie(box2);
wyswietlanie(box2);

std::cout<<"\nNa połowę box - przekazanie przez adres"<<std::endl;
box = polowa(&box);
wyswietlanie(box);

std::cout<<"\nModyfikowanie struktury box2: \n";
std::cout<<"Podaj nowego producenta: \n";
std::getline (std::cin, box2.producent);
std::cout<<"Podaj nową wysokość: \n";
std::cin>>box2.wysokosc;
std::cout<<"Podaj nową szerokość: \n";
std::cin>>box2.szerokosc;
std::cout<<"Podaj nową długość: \n";
std::cin>>box2.dlugosc;
std::cout<<std::endl;

box2 = obliczanie(box2);
wyswietlanie(box2);

return 0;
}

void wyswietlanie(pudlo pokaz)
{
    std::cout<<"Producent: "<<pokaz.producent<<std::endl;
    std::cout<<"Wysokość: "<<pokaz.wysokosc<<std::endl;
    std::cout<<"Szerokść: "<<pokaz.szerokosc<<std::endl;
    std::cout<<"Długość: "<<pokaz.dlugosc<<std::endl;
    std::cout<<"Objętość: "<<pokaz.objetosc<<std::endl;
}

pudlo obliczanie (pudlo oblicz)
{
 oblicz.objetosc = (oblicz.wysokosc * oblicz.szerokosc * oblicz.dlugosc);    
   return oblicz;
}

pudlo polowa (pudlo * oblicz)
{   
oblicz->producent = "kartonex podwykonawca";
oblicz->wysokosc = oblicz->wysokosc / 2;
oblicz->szerokosc = oblicz->szerokosc / 2;
oblicz->dlugosc = oblicz->dlugosc / 2;
oblicz->objetosc = oblicz->objetosc / 2;
    
    return * oblicz;
}

// 3/336
