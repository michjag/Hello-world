//Suma liczb z zakresu pomiędzy dwoma podanymi liczbami
#include <iostream>
int main()
{
int liczba1, liczba2;
int suma=0;
int wynik;
    
    std::cout<<"podaj dwie liczby całkowite \n";
    std::cin>>liczba1>>liczba2;
      
     
    for (int i=liczba1; i<liczba2-1 ; i++)
    {
    suma=suma+i+1;
    }
     
    wynik=liczba1 + liczba2 + suma;
   
    std::cout<<wynik<<'\n';
    
return 0;
}
