#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("numere.in");
    int f[100]={0};
    int x,maxx=0,p=0;
    //stocam intr-un vector de frecventa nr de aparitii
    //memorand in acelasi timp nr cel mai mare de aparitii
    //si cea mai mare valoare citita
    while(fin>>x)
    {
        f[x]++;
        if(f[x]>maxx)
            maxx=f[x];
        if(x>p)
            p=x;
    }
    //afisam nr care apar de cele mai multe ori
    for(int i=0;i<=p;i++)
        if(f[i]==maxx)
        cout<<i<<' ';
    return 0;
}
