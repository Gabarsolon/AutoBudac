#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ifstream fin("doc.txt");
    ofstream fout("cnp.txt");
    char s[201];
    fin.getline(s,201);
    int n=strlen(s);
    bool gasit=false;
    for(int i=0;i<n;i++)
    {
        if(isdigit(s[i]))
        {
            char x[14];
            int m=0;
            x[m]=s[i];
            i++;
            while(i<n && m<12 && isdigit(s[i]))
               x[++m]=s[i],i++;
            if(m==12)
            {
                gasit=true;
                x[13]='\0';
                fout<<x<<'\n';
            }
        }
    }
    if(!gasit)
        fout<<0;
    return 0;
}
