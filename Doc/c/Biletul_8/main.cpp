#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(a[1]>a[n])
    {
        float aux=a[1];
        a[1]=a[n];
        a[n]=aux;
    }
    int cnt=0;
    for(int i=2;i<n;i++)
        if(a[i]<a[1] || a[i]>a[n])
            cnt++;
    cout<<cnt;
    return 0;
}
