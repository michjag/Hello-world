//Program wczytujący dane z klawiatury aż do znaku @, a następnie pokazujący wczytane dane poza cyframi; 
//każda wielka litera ma być zamieniona na małą i odwrotnie.

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  cout<<"Podaj tekst do analizy, @ kończy wprowadzanie \n";
  
  char ch;
  
  cin.get(ch);
  while(ch != '@')
  {
   
    if(islower(ch))
        putchar(toupper(ch));
    else if(isupper(ch))
        putchar(tolower(ch));
    else if(isblank(ch))
        cout<<" ";
    else if(isdigit(ch))
        cout<<"";
      
      cin.get(ch);
}
cout<<ch;

return 0;
}
