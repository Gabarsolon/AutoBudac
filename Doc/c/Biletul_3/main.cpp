#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("numere.in");
    int n;
    fin>>n;
    int nr=0,p=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        fin>>x;
        nr+=x;
        p=p*10+1;
    }
    cout<<nr*p;
    return 0;
}
