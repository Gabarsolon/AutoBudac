#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("mat.in");
    ofstream fout("mat.out");
    int n,m;
    fin>>n>>m;
    int maxx=0;
    int a[n+1][m+1];
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            fin>>a[i][j];
            if(a[i][j]>maxx)
                maxx=a[i][j];
        }
    }
    for(int j=1;j<=m;j++)
    {
        int minn=2000000000;
        for(int i=1;i<=n;i++)
            if(a[i][j]<minn)
                minn=a[i][j];
        for(int i=1;i<=n;i++)
            if(a[i][j]==maxx)
            a[i][j]=minn,cnt++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            fout<<a[i][j]<<' ';
        fout<<'\n';
    }
    fout<<cnt;
    return 0;
}
