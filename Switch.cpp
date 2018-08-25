/*
 Napisz szkielet programu sterowanego z menu. Program ten powinien pokazywać menu zawierające dostępne opcje,
 każda z nich ma być oznaczona literą. Kiedy użytkownik poda literę inną niż jedna z czterech dopuszczalnych,
 program ma żądać podania poprawnej wartości tak długo, aż użytkownik spełni to żądanie. 
 Następnie za pomocą instrukcji swich program ma podjąć proste działanie zależne od wyboru użytkownika.
 Po uruchomieniu program może dać na przykład takie wyniki:
 
 r) roślinożerca p) pianista
 d) drzewo       g) gra
 proszę podać literę r,p,d lub g:
 
 klon jest drzewem.
*/

#include <iostream>
using namespace std;

void menu();

int main()
{
    char wybor;
    
    menu();
    cin>>wybor;
    
    while (wybor != 'e')
    {
        switch(wybor) 
        {
            case 'r' : cout<<"Roślinożerca je rośliny\n";
                break;
            case 'd' : cout<<"Klon jest drzewem\n";
                break;
            case 'p' : cout<<"Pianista gra na pianinie\n";
                break;
            case 'g' : cout<<"Granie na czas\n";
                break;
            default : cout<< "Nie ma takiej opcji, wybierz inną\n";
        }
        cout<<endl;
        menu();    
    cin>>wybor;
    }
return 0;
}

void menu()
{
    cout<<"Proszę wybrać z listy: \n";
    cout<<"r) roślinożerca p) pianista\n";
    cout<<"d) drzewo       g) gra\n";
    cout<<"e) wyjście\n";
}
