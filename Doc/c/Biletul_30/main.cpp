#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("date.in");
int main()
{
    char s[256];
    fin.getline(s,256);
    int n=strlen(s);
    char voc[]="aeiou";
    int cnt=0;
    for(int i=1;i<n;i++)
        if(strchr(voc,s[i]) && strchr(voc,s[i-1]))
            cnt++;
    cout<<cnt;
    return 0;
}
