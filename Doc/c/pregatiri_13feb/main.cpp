#include <iostream>
using namespace std;
int main()
{
    bool v[41];
    int k,x;
    cin>>k;
    cout<<"numere de grad cel putin "<<k<<':';
    cin>>x;
    while(x!=0)
    {
       int cx=x;
       int n=0;
       while(x!=0)
       {
           v[++n]=x%2;
           x/=2;
       }
       int grad=0;
       for(int i=1;i<=n-2 && grad<k;i++)
        if(v[i]==1 && v[i+1]==0 && v[i+2]==1)
        grad++;
       if(grad>=k)
        cout<<cx<<' ';
        cin>>x;
    }
    return 0;
}
