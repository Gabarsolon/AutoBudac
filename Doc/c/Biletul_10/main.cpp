#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("DATE.TXT");
    int maxx=0;
    int f[100]={0};
    int cnt=0;
    int x;
    while(fin>>x)
    {
        cnt++;
        if(f[x]==0)
        f[x]=cnt;
        else
        {
            if(cnt-f[x]>maxx)
                maxx=cnt-f[x];
            f[x]=cnt;
        }
    }
    cout<<maxx;
    return 0;
}
