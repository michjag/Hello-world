//Po wpisaniu liczby wierszy pokazuje sie połowa choinki wraz z wypełnieniem spacji.
#include <iostream>

int main()
{
using namespace std;

int gwiazdka;

cout << "Podaj liczbę wierszy: ";
cin >> gwiazdka;

gwiazdka = gwiazdka + 1;

for (int i = 2; i <= gwiazdka ; i++) //jak i=1 to wtedy zaczyna się od ....
{ 
    for (int k = 1; k <= gwiazdka-i ; k++)
    { 
    cout << ".";
    }
        
    for (int j = 1; j <= i-1 ; j++)
    {
    cout << "*";
    }
cout << endl;
}

return 0;
}
