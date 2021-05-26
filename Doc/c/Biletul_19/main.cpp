#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n;
    fin>>n;
    int cm[101];
    int a[101][101];
    int maxxp=0;
    int minn=2000000000;
    for(int i=1;i<=n;i++)
    {
        int maxx=0;
        for(int j=1;j<=n;j++)
        {
            fin>>a[i][j];
            if(a[i][j]>maxx)
                maxx=a[i][j];
            if(a[i][j]<minn)
                minn=a[i][j];
        }
        if(maxx>maxxp)
            maxxp=maxx;
        cm[i]=maxx;
    }
    for(int i=1;i<=n;i++)
        if(cm[i]==maxxp)
        {
            for(int j=1;j<=n;j++)
                a[i][j]+=minn;
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        fout<<a[i][j]<<' ';
        fout<<'\n';
    }
    return 0;
}
