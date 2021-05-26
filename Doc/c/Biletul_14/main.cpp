#include <iostream>
#include <fstream>
using namespace std;
bool test_fibo(int n)
{
    int f1,f2=1,f3=1;
    while(f2<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f2==n)
        return true;
    return false;
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
        if(test_fibo(x))
            fout<<x<<' ';
    }
    return 0;
}
