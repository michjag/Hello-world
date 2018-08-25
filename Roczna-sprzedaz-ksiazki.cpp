#include <iostream>
#include <string>

int main()
{
std::string miesiace[12] = {"sty", "lut", "mar", "kwi", "maj", "cze", "lip", "sie", "wrz", "paz", "lis", "gru"};

 int ilosc[12];
 int suma = 0;
 
 for (int i = 0; i < 12; i++)
 {
     std::cout<<miesiace[i]<<" ";
     std::cin>>ilosc[i];
 
     suma += ilosc[i];
}
std::cout<<"Łączna sprzedaż: "<<suma<<std::endl;
  
 for (int i = 0; i < 12; i++)
 {
     std::cout<<ilosc[i]<<" ";
     std::cout<<miesiace[i]<<'\n';
 }
      
    return 0;
}
