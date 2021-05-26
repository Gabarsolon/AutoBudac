#include <iostream>
#include <fstream>
using namespace std;
int suma_cifre(int x)
{
    if(x<10)
        return x;
    return x%10+suma_cifre(x/10);
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
        if(suma_cifre(x)%3==0)
            fout<<x<<' ';
    }
    return 0;
}
