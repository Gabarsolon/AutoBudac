#include <fstream>
using namespace std;
bool f[10000];
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int x;
    while(fin>>x)
        f[x]=true;
    for(int i=9999;i>=1;i--)
        if(f[i]==false)
        fout<<i<<' ';
    return 0;
}
