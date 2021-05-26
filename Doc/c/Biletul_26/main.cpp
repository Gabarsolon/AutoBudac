#include <iostream>
#include <fstream>
using namespace std;
int s[10];
ofstream fout("munte.txt");
void afis(int k)
{
    for(int i=1;i<=5;i++)
        fout<<s[i];
    for(int i=4;i>=1;i--)
        fout<<s[i];
    fout<<'\n';
}
bool solutie(int k)
{
    return k==5;
}
bool valid(int k)
{
    if(k==1)
        return true;
    if(s[k]<=s[k-1])
        return false;
    return true;
}
void back(int k)
{
    for(int i=1;i<=9;i++)
    {
        s[k]=i;
        if(valid(k))
            if(solutie(k))
            afis(k);
            else
            back(k+1);
    }
}
int main()
{

    back(1);
    return 0;
}
