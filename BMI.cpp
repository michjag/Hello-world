//Obliczanie BMI w stopach, calach i funtach
//Zadanie 2/118 z książki Język C++ Stephen Prata

#include <iostream>
using namespace std;

double stopa; //= 30.48; tyle cm
double cal; //= 2.54; tyle cm
double funt, wzrost_1, wzrost_2, metr, centymetr, kg, bmi;

int main()
{
    cout << "Podaj wzrost w stopach i calach: " << endl;
    cin >> stopa >> cal;

    wzrost_1 = stopa * 30.48;
    wzrost_2 = cal * 2.54;

    cout << "Wzrost w metrach: "<<endl;
    centymetr=wzrost_1 + wzrost_2;
    metr = centymetr/100;
    cout << metr <<endl;

    cout << "Podaj wage w funtach: "<<endl;
    cin >> funt;
    kg = funt/2.2;

    cout << kg <<endl;

    bmi = kg/(metr*metr);

    cout << "BMI: "<< bmi <<endl;

    return 0;
}
