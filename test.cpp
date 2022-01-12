#include <iostream>
#include <string.h>
using namespace std;
int p,a;
string haslo;
string szyfrowanie(string haslo,int p)
{
for(int i=0;i<haslo.length();i++)
{
    haslo[i]=haslo[i]+p;
}
return(haslo);
}
string rowanie(string haslo,int p)
{
for(int i=0;i<haslo.length();i++)
{
    haslo[i]=haslo[i]-p;
}
return(haslo);
}
int main()
{
    while (1==1)
   { 
    cout<<"szyfrowanie (1), rozszyfrowanie (2) ";
    cin>>a;
    cout<<endl<<"podaj tekst ";
    cin>>haslo;
    cout<<endl<<"podaj klucz szyfrowania ";
    cin>>p;
    if(a==1)
    {
        haslo=szyfrowanie(haslo,p);
        cout<<endl<<haslo;
    }
    else if(a==2)
    {
        haslo=rowanie(haslo,p);
        cout<<endl<<haslo;
    }
    else cout<<"nie ma takiej opcji";
    cout<<endl;
   }
    return 0;
}