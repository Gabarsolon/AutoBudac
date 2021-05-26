#include <fstream>
#include <iostream>
using namespace std;
int calcPut(int a, int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
        p*=a;
    return p;
}
int main()
{
    ifstream fin("eur.in");
    ofstream fout("eur.out");
    int S,n,e;
    fin>>S>>n>>e;
    while(calcPut(e,n)>S)
        n--;
    int cnt=0;
    while(S>0)
    {
        int x=calcPut(e,n);
        int y=S/x;
        cnt+=y;
        fout<<y<<" bacnote cu valoarea "<<x<<'\n';
        S-=y*x;
        n--;
    }
    fout<<cnt;
    return 0;
}
