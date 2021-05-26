#include <iostream>
using namespace std;
bool prim(int n)
{
    if(n<2)
        return false;
    if(n%2==0 && n!=2)
        return false;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0)
        return false;
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int minn=-1,p=0;
    for(int x=a;x<=b;x++)
    {
        if(prim(x))
        {
            int i=b+a-2*x;
            if(i<0)
                i=-i;
            if(minn==-1)
                minn=i,p=x;
            else if(i<minn)
                minn=i,p=x;
        }
    }
    cout<<p;
    return 0;
}
