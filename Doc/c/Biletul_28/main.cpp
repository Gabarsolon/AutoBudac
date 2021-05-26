#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int x;
    fin>>x;
    int n=sqrt(x);
    int mat[n+1][n+1];
    int k = 1;
    int cn=n;
    while (k < n)
    {
        for (int i = k; i < n; i++)
        {
            fin>>x;
            mat[i][k]=x;
        }
        for (int i = k; i < n; i++)
        {
            fin>>x;
            mat[n][i]=x;
        }
        for (int i = n; i > k; i--)
        {
            fin>>x;
            mat[i][n]=x;
        }
        for (int i = n; i > k; i--)
        {
            fin>>x;
            mat[k][i]=x;
        }
        k++;
        n--;
    }
    for(int i=1;i<=cn;i++)
    {
        for(int j=1;j<=cn;j++)
            fout<<mat[i][j]<<' ';
        fout<<'\n';
    }
    return 0;
}
