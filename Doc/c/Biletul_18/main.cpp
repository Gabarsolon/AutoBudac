#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("multimi.in");
    ofstream fout("multimi.out");
    int n,m;
    fin>>n>>m;
    int a[101];
    int b[101];
    for(int i=1;i<=n;i++)
        fin>>a[i];
    for(int j=1;j<=m;j++)
        fin>>b[j];
    int i=1,j=1;
    while(i<=n && j<=m)
    {
        if(a[i]<b[j])
        {
            fout<<a[i]<<' ';
            i++;
        }
        else if(a[i]>b[j])
        {
            fout<<b[j]<<' ';
            j++;
        }
        else
        {
            fout<<a[i]<<' ';
            i++;
            j++;
        }
    }
    while(i<=n)
        fout<<a[i++]<<' ';
    while(j<=m)
        fout<<b[j++]<<' ';
    return 0;
}
