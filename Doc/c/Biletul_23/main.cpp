#include <iostream>
#include <fstream>
using namespace std;
int nrCif(int n)
{
    int cnt=0;
    while(n>0)
        cnt++,n/=10;
    return cnt;
}
int main()
{
    ofstream fout("pag.txt");
    int n;
    cin>>n;
    int cnt=1;
    while(n>0)
    {
        n=n-nrCif(cnt);
        cout<<nrCif(cnt);
        cnt++;
    }
    cout<<n%300+1;
    return 0;
}
