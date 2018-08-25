/*
Napisz program wczytujący dane wejściowe aż do wpisania pojedynczej litery q.
Dalej program ma pokazać liczbę słów zaczynających się od samogłosek, zaczynających się od spółgłosek
i niezaliczonych do żadnej z tych kategorii. Jeden sposób realizacji tego zadania to użycie funkcji isalpha()
do wyróżnienia słów zaczynających się od liter i innych słów, a następnie użycie if lub switch do wyróżnienia 
samogłosek od spółgłosek. Oto przykładowy wynik żądanego programu:

Podawaj słowa (pojedyncze q kończy):
12 wołów piżmowych panoszyło się na 15-metrowym trawniku. q
6 słów zaczyna się od spółgłoski,
0 słów zaczyna się od samogłosek,
2 słów nie zalicza się do żadnej z tych kategorii.
*/

#include <iostream>
#include <string>

using namespace std;
    
int main()
{
    string znaki;
    int samo = 0;
    int spol = 0;
    int inne = 0;
    
cout<<"Podawaj słowa (pojedyncze q kończy): \n";

while (cin>>znaki, znaki != "q")
{
   
    if ((znaki[0] == 'a')||(znaki[0] == 'e')||(znaki[0] == 'ą')||(znaki[0] == 'ę')||(znaki[0] == 'i')||(znaki[0] == 'o')||(znaki[0] == 'u')||(znaki[0] == 'y'))
      samo++;
   
    if (isalpha(znaki[0]) && !((znaki[0] == 'a')||(znaki[0] == 'e')||(znaki[0] == 'ą')||(znaki[0] == 'ę')||(znaki[0] == 'i')||(znaki[0] == 'o')||(znaki[0] == 

'u')||(znaki[0] == 'y')))
        spol++;
    
    if (!(isalnum(znaki[0])) || (isdigit(znaki[0])))
        inne++;
}

cout<<spol<<" słów zaczyna się od spółgłoski"<<endl;
cout<<samo<<" słów zaczyna się od samogłosek"<<endl;
cout<<inne<<" słów nie zalicza się do żadnej z tych kategorii."<<endl;     

return 0;
}
