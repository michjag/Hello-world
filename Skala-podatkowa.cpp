//Obliczanie podatku dochodowego w Królestwie "Naturlandii".

#include <iostream>
using namespace std;

int zarobek;

int main()
{
    cout<<"Podaj zarobek: (Q kończy program)\n";
    cin>>zarobek;
    
   while((zarobek != 'q') && (zarobek > 0))
   {
           
    if (zarobek >= 1 && zarobek <= 5000)
        cout<<"Nie zapłacisz podatku"<<endl;

    if (zarobek > 5000 && zarobek <= 15000)
        cout<<"Zapłacisz "<<(zarobek - 5000) * 0.1<<" podatku"<<endl;

    if (zarobek > 15001 && zarobek <= 35000)
        cout<<"Zapłacisz "<< 1000 + (zarobek - 10000) * 0.15<<" podatku"<<endl;
    
    if (zarobek > 35001)
        cout<<"Zapłacisz "<< 4000 + (zarobek - 35000) * 0.2<<" podatku"<<endl;
    
    
    cout<<"Podaj zarobek:\n";
    cin>>zarobek;
    }
    
    return 0;
}
