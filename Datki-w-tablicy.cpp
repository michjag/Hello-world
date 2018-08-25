// Napisz program odczytujący do 10 datków do tablicy wartości double. 
//Program ma kończyć wczytywanie danych po podaniu wartości nieliczbowej. 
//Na koniec program ma pokazać średnią liczb oraz podać te wartości z tablicy, które od tej średniej są wieksze.

#include <iostream>
using namespace std;

double tablica[10];

int main()
{
    
    for (int i = 0; i < 10; i++)
    {
        cin>>tablica[i];
        
        if (isalpha(tablica[i]))
            break;
    }
    
    cout<<endl;
    
    double suma;
    for (int i = 0; i < 10; i++)
    {
        suma += tablica[i];
    }

    double srednia = suma / 10;
    cout<<"Średnia: "<<srednia<<endl;
    
    for (int i = 0; i < 10; i++)
    {
        if (tablica[i] > srednia)
        {
        cout<<tablica[i]<<'\n';
        }
    } 

return 0;
}
