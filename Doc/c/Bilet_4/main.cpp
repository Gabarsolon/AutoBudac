#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("cuvinte.in");
    char m[101][101];
    int p=0;
    char s[101];
    while(fin>>s)
        strcpy(m[++p],s);
    for(int i=1;i<p;i++)
        for(int j=i+1;j<=p;j++)
    if(strcmp(m[i],m[j])>0)
    {
        char aux[101];
        strcpy(aux,m[i]);
        strcpy(m[i],m[j]);
        strcpy(m[j],aux);
    }
    for(int i=1;i<=p;i++)
        cout<<m[i]<<'\n';
    return 0;
}
