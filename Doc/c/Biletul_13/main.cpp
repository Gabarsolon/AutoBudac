#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=n;j++)
         {
             if(i+j==n+1)
                a[i][j]=(i+j-1)%n+n;
         else
            a[i][j]=(i+j-1)%n;
         }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
