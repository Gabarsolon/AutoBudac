#include <iostream>
#include <fstream>
using namespace std;
int suma(int x[11][11],int n,int p)
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=x[p][i];
    return sum;
}
int main()
{
    ifstream fin("matrice.in");
    ofstream fout("matrice.out");
    int n;
    fin>>n;
    int x[11][11];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        fin>>x[i][j];
    for(int i=1;i<=n;i++)
        if(suma(x,n,i)%2==0)
        fout<<i<<' ';
    return 0;
}
