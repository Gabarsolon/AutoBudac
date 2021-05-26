#include <iostream>
#include <cstring>
using namespace std;
int apcar(char s[],char c)
{
    int cnt=0;
    for(int i=0;i<strlen(s);i++)
        if(s[i]==c)
        cnt++;
    return cnt;
}
int main()
{
    char s[256];
    cin.getline(s,256);
    char voc[]="AEIOUaeiou";
    int cnt=0;
    for(int i=0;i<10;i++)
        cnt+=apcar(s,voc[i]);
    cout<<cnt;
    return 0;
}
