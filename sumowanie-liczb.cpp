//Sumowanie liczb
#include <iostream>

int main()
{
   
    int liczba, suma;
    
    std::cout<<"Podaj kolejne liczby, zostanie wyświetlona ich suma, 0 kończy wprowadzanie"<<std::endl;    
    for (;;)
    {
        std::cin>>liczba;
        suma +=liczba;
        std::cout<<suma<<'\n';
    
    if (liczba==0)
        break;
    }
    return 0;
}
