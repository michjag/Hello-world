//Program obliczający prawdopodobieństwo wygranej w grach typu eurojacpot
//(5 liczb z 50 oraz 2 liczby z 10).
#include <iostream>
#include <iomanip>

  long double probability(unsigned numbers, unsigned picks, unsigned pow,  unsigned cho_pow);

int main()
{
    using namespace std;
    unsigned total, choices, powerball, choices_powerball;
 
    cout<<"Najpierw podaj największą liczbę, jaką można wylosować oraz liczbę skreśleń,\na następnie największą liczbę Powerball jaką można wylosować i liczbę skreśleń: \n";
    
    cout<<setprecision(25);
    
    while((cin >> total >> choices >> powerball >> choices_powerball) && (choices <= total) && (choices_powerball <= powerball))
    {
        cout<<"Szansa wygranej to jeden do "<< probability(total, choices, powerball, choices_powerball)<<endl;
        
        cout<<"Następne cztery liczby, (q, aby zakończyć): ";
    }
    cout<<"Do widzenia\n";
    
    return 0;
}

 long double probability(unsigned numbers, unsigned picks, unsigned pow,  unsigned cho_pow)
{
     long double result = 1.0;
     long double resultA = 1.0;
     long double resultB = 1.0;
     long double n; //total
     unsigned p; //choices
     long double k; //pow
     unsigned c; //cho_pow
    
        for (n = numbers, p = picks; p > 0; n--, p--)
        resultA = resultA * n / p;
  
//          std::cout<<"resultA: "<<resultA<<std::endl;
        
        for (k = pow, c = cho_pow; c > 0; k--, c--)
        resultB = resultB * k / c;    
        
//          std::cout<<"resultB: "<<resultB<<std::endl;
        
        result = resultA * resultB;    
        
        return result;
}

// 4/336
