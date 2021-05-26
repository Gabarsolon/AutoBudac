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
    int cnt2=0;
    while(n>0)
    {
        n=n-nrCif(cnt);
        cnt++;
        cnt2++;
        if(cnt>300)
            cnt=1;
    }
    cnt--;
    if(n==0)
    {
         cout<<cnt2/300+1<<'\n';
         cout<<cnt%300;
    }
    else
        cout<<"IMPOSIBIL";
    return 0;
}
