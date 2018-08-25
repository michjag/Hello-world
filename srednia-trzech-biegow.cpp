#include <iostream>

using namespace std;

float bieg[3];
float suma=0;
float srednia;

int main()
{

for (int i=0; i<3; i++)
{
    cout <<"Podaj " <<i+1<<" bieg"<<endl;
    cin>> bieg[i];

    suma = suma + bieg[i];
    srednia = suma/3;

}
cout<<bieg[0]<<" "<<bieg[1]<<" "<<bieg[2]<<endl;
 cout<<"Srednia to: "<<srednia;

return 0;
}
