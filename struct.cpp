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
         {"Mocha Munch", 2.3, 350}
    };

cout<<snack[0].marka<<" "<<snack[0].waga<<" "<<snack[0].kcal;

return 0;
}
