#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int a,b;
    fin>>a>>b;
    int f[10]={0};
    if(a==0)
        f[0]++;
    if(b==0)
        f[0]++;
    while(a>0 && b>0)
        f[a%10]++,f[b%10]++,a/=10,b/=10;
    while(a>0)
        f[a%10]++,a/=10;
    while(b>0)
        f[b%10]++,b/=10;
    int i;
    for(i=1;i<=9;i++)
        if(f[i]>0)
    {
        fout<<i;
        f[i]--;
        break;
    }
    for(int j=1;j<=f[0];j++)
        fout<<0;
    for(i;i<=9;i++)
        for(int j=1;j<=f[i];j++)
            fout<<i;
    return 0;
}
