#include <iostream>
using namespace std;

const int strsize = 50;

struct zpdw
{
    char imie[strsize]; //0
    char stanowisko[strsize]; //1
    char pseudonim[strsize]; //2
    int preferencje;
};

zpdw Tablica[3] =
{
    {"Zenon Nowak","Młodszy programista","Zenek",1},
    {"Janusz Nosacz","Asystent","Mem",2},
    {"Jerzy Kowalski","Sprzątacz","Czyściciel",0}
};

void menu();

int main()
{
    char wybor;
    menu();
    cin>>wybor;
    
    while(wybor != 'q')
    {
     switch (wybor)
     {
         case 'a' : 
         { 
             cout<<"Lista wg imion\n";
             cout<<Tablica[0].imie<<endl;
             cout<<Tablica[1].imie<<endl;
             cout<<Tablica[2].imie<<endl;
         }
         break;
         
        case 'b' : 
         { 
             cout<<"Lista wg stanowisk\n";
             cout<<Tablica[0].stanowisko<<endl;
             cout<<Tablica[1].stanowisko<<endl;
             cout<<Tablica[2].stanowisko<<endl;
         }
         break;
         
         case 'c' : //Zrobione w pętli
         { 
             cout<<"Lista wg imion\n";
             for (int i = 0; i < 3; i++)
             {
                 cout<<Tablica[i].pseudonim<<endl;
             }
             
        }
         break;
         
         case 'd' : 
         { 
             cout<<"Lista wg preferencji\n";
            for (int i = 0; i < 3; i++)
            {
             if (Tablica[i].preferencje == 0)
                 cout<<Tablica[i].imie<<endl;
            }
            
            for (int i = 0; i < 3; i++)
            {
             if (Tablica[i].preferencje == 1)
                 cout<<Tablica[i].stanowisko<<endl;
            } 
            
            for (int i = 0; i < 3; i++)
            {
             if (Tablica[i].preferencje == 2)
                 cout<<Tablica[i].pseudonim<<endl;
            }
         }
         break;
         
         
     }
     
    cout<<endl;
    menu();
    cin>>wybor;
    }

    
    return 0;
}

void menu()
{
    cout<<"Zakon Programistów Dobrej Woli\n";
    cout<<"a) Lista wg imion\n";
    cout<<"b) Lista wg stanowisk\n";
    cout<<"c) Lista wg pseudonimów\n";
    cout<<"d) Lista wg preferencji\n";
    cout<<"q) Qniec ;)\n";
    cout<<"Wybierz jedną z opcji\n";
    cout<<endl;
}    
