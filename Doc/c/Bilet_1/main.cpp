#include <iostream>
#include <fstream>
using namespace std;
int p=2,v[101];
int generare_termen(int suma,int n)
{
    if(p<=2)
        return 1;
    p--;
    while(v[p]+suma>n)
        p--;
    return v[p];
}
int main()
{
    ifstream fin("numere.in");
    int n;
    fin>>n;
    int f1,f2=1,f3=1;
    v[1]=1,v[2]=1;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
        v[++p]=f3;
    }
    int suma=v[--p];
    cout<<suma<<'+';
    while(suma!=n)
    {
        int x=generare_termen(suma,n);
        cout<<x;
        suma+=x;
        if(suma!=n)
            cout<<'+';
    }
    return 0;
}
