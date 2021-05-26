#include <iostream>
using namespace std;
int sub(int n,int k,int a[101][101])
{
    int suma=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        if(i+j==k)
        suma+=a[i][j];
    return suma;
}
int main()
{
    int n;
    cin>>n;
    int a[101][101];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin>>a[i][j];
    int suma=0;
    for(int i=1;i<=n;i++)
        suma+=sub(n,i,a);
    cout<<suma;
    return 0;
}
