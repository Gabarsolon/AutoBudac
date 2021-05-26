#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("DATE.TXT");
    int n,m;
    fin>>n>>m;
    int a[10]={0};
    int b[10]={0};
    for(int i=1;i<=n;i++)
    {
        int x;
        fin>>x;
        a[x]++;
    }
    for(int i=1;i<=m;i++)
    {
        int x;
        fin>>x;
        b[x]++;
    }
    bool da=true;
    for(int i=0;i<=9 && da;i++)
        if(a[i]<b[i])
        da=false;
    if(da)
        cout<<"b se poate obtine din a";
    else
        cout<<"b nu se poate obtine din a";
    return 0;
}
