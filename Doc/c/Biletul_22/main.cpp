#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fin("numere.in");
    int n;
    fin>>n;
    int nr[n+1];
    int rotunde=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        fin>>x;
        int cx=x;
        int p=1,cnt=1;
        while(x>9)
        {
            p*=10;
            cnt++;
            x/=10;
        }
        int rot=cx;
        for(int j=1;j<cnt;j++)
        {
            rot=(rot%10*p)+rot/10;
            if(rot==cx)
            {
                nr[++rotunde]=cx;
                break;
            }
        }
    }
    if(rotunde==0)
        cout<<0;
    else
        cout<<rotunde<<'\n';
    for(int i=1;i<=rotunde;i++)
        cout<<nr[i]<<' ';
    return 0;
}
