//Zysk Cleo i Dafne - procent składany i nie.
#include <iostream>
#include <cmath>

    const double kapital = 100;
    double kapitalCleo = 100;
            
int main()
{
int lat;    
std::cout<<"Podaj liczbę lat: ";
std::cin>>lat;   

int Dafne[lat];
int Cleo[lat];

int *ptrDafne;
int *ptrCleo;

ptrDafne = &Dafne[0];
ptrCleo = &Cleo[0];

double zyskDafne, zyskSumaDafne;

std::cout<<"Zysk Dafne: \n";
for (int i = 0; i < lat; i++)
{
    zyskDafne = 0.1 * kapital;
    Dafne[i] = ((zyskSumaDafne += zyskDafne) + kapital);
}

for (int i = 0; i < lat; i++)
{
    std::cout<<Dafne[i]<<std::endl;   
}

std::cout<<std::endl;
    
std::cout<<"Zysk Cleo: \n";
for (int i = 0; i < lat; i++)
{
    kapitalCleo = kapitalCleo * ( 1 + 0.05 ) * 1;
    Cleo[i] =+ kapitalCleo;
       
}

for (int i = 0; i < lat; i++)
{
   std::cout<<Cleo[i]<<std::endl; 
}

/*
if ( *(ptrDafne + lat) < *(ptrCleo + lat))
    {
    std::cout<<"teraz";
    } 
    */
    std::cout<< *(ptrDafne + 3) <<std::endl;

/*
  if ( (*(ptrCleo + lat)) >= (*(ptrDafne + lat)))
{
    std::cout<<"teraz";
} 


std::cout<< (*(ptrCleo + lat))<<"    "<< (*(ptrDafne + lat));
*/

/*
std::cout<< "wskaźniki"<<std::endl;
std::cout<< *ptrCleo<<std::endl;
std::cout<< *(ptrCleo + 1)<<std::endl;
std::cout<< *(ptrCleo + 2)<<std::endl;

std::cout<< *ptrDafne<<std::endl;
std::cout<< *(ptrDafne + 1)<<std::endl;
std::cout<< *(ptrDafne + 2)<<std::endl;
*/

return 0;
} 

