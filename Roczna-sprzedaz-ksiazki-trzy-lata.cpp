//Sprzedaż książki z każdego miesiąca zsumowana w każdym roku i przez trzy lata.
#include <iostream>
#include <string>

int main()
{
std::string miesiace[12] = {"sty", "lut", "mar", "kwi", "maj", "cze", "lip", "sie", "wrz", "paz", "lis", "gru"};

 int ilosc[3][12];
 int suma[3];
 
 for (int i = 0; i < 3; i++)
 {
 
 for (int j = 0; j < 12; j++)
 {
     std::cout<<"Rok "<<i + 1<<" "<<miesiace[j]<<" ";
     std::cin>>ilosc[i][j];
 
     suma[i] += ilosc[i][j];
 }
std::cout<<"Łączna sprzedaż: "<<suma[i]<<std::endl;
}

std::cout<<"Całkowita sprzedaż: "<<suma[0] + suma[1] + suma[2]; 
 /*
 
 for (int i = 0; i < 12; i++)
 {
     std::cout<<ilosc[i]<<" ";
     std::cout<<miesiace[i]<<'\n';
     
 }
   */

   return 0;
}
