#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int a,b;
    fin>>a>>b;
    int f[10]={0};
    if(a==0 || b==0)
        f[0]++;
    while(a>0)
        f[a%10]++,a/=10;
    while(b>0)
        f[b%10]++,b/=10;
    for(int i=9;i>=0;i--)
        while(f[i]>0)
    {
        fout<<i;
        f[i]--;
    }
    return 0;
}
