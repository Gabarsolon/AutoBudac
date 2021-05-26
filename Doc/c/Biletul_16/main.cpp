#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    int b1,b2;
    int x,y;
    fin>>b1>>b2;
    fin>>x>>y;
    fin.close();
    int s=0;
    int p1=1;
    int p2=1;
    while(x>0 && y>0)
    {
        s+=(x%10)*p1+(y%10)*p2;
        p1*=b1;
        p2*=b2;
        x/=10;
        y/=10;
    }
    while(x>0)
    {
        s+=(x%10)*p1;
        p1*=b1;
        x/=10;
    }
    while(y>0)
    {
        s+=(y%10)*p2;
        p2*=b2;
        y/=10;
    }
    fout<<s;
    return 0;
}
