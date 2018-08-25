//Prosty katalog samochodów - i wypisywanie do konsoli.
#include <iostream>
#include <string>

struct car
{
     std::string marka;
    int rok_budowy;
};

int main()
{
   int ile;
    std::cout<<"Ile samochodów chcesz skatalogować? \n";
    std::cin>>ile;
    
    car * ptr = new car[ile];    
    
    std::string nowa_marka[ile];

    int nowy_rok_budowy[ile];
       
    for (int i = 0; i < ile; i++)
    {
        std::cout<<"Samochód #"<<i + 1<<std::endl;
        std::cout<<"Proszę podać markę: \n";
        std::cin>>ptr->marka;
        std::cin.get();
        std::cout<<"Proszę podać rok produkcji: \n";
        std::cin>>ptr->rok_budowy;
        std::cin.get();
           
        nowa_marka[i] = ptr->marka;
        nowy_rok_budowy[i] = ptr->rok_budowy;
    }

    std::cout<<std::endl;
 
    for (int i = 0; i < ile; i++)
    {
        std::cout<<nowy_rok_budowy[i]<<" "<<nowa_marka[i]<<'\n';
    }
        
delete []  ptr;
 
return 0;
}
