#include <iostream>
#include <fstream>
using namespace std;
bool prim(int x)
{
    if(x<2)
        return false;
    if(x%2==0 && x!=2)
        return false;
    for(int d=3;d*d<=x;d+=2)
        if(x%d==0)
        return false;
    return true;
}
int main()
{
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        fin>>x;
        if(prim(x))
            fout<<x<<' ';
    }
    return 0;
}
