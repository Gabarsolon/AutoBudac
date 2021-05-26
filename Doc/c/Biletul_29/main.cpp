#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    char s[256];
    fin.getline(s,256);
    char *p=strtok(s," .,;:?!");
    while(p!=NULL)
    {
        if(strstr(p,"ate"))
            fout<<p<<'\n';
        p=strtok(NULL," .,:;?!");
    }
    return 0;
}
