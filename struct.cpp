#include <iostream>

using namespace std;

struct Batonik
{
    char marka[20];
    float waga;
    int kcal;
};

int main()
{
    Batonik snack[4]=
    {
        {"Mocha Munch", 2.3, 350},
        {"Sniki", 5.8, 700},
        {"Wenus", 9.9, 1000},
        {"Mokk Munci", 1.2, 150}
    };

cout<<snack[0].marka<<" "<<snack[0].waga<<" "<<snack[0].kcal<<endl;
cout<<snack[1].marka<<" "<<snack[1].waga<<" "<<snack[1].kcal<<endl;
cout<<snack[2].marka<<" "<<snack[2].waga<<" "<<snack[2].kcal<<endl;
cout<<snack[3].marka<<" "<<snack[3].waga<<" "<<snack[3].kcal<<endl;

return 0;
}
