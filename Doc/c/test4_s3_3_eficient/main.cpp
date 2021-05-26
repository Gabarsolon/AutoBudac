//2021_test4_sub3_p3
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin1("bac1.txt");
    ifstream fin2("bac2.txt");
    ///eficient
    int n1,n2,n3=0;
    //interclasare multiplii de 5 necomuni
    int v1,v2;
    fin1>>n1;
    fin2>>n2;
    fin1>>v1;
    fin2>>v2;
    while(!fin1.eof() && !fin2.eof())
    {
        if(v1%5!=0)
            fin1>>v1;
        else if(v2%5!=0)
            fin2>>v2;
        else if(v1==v2)
            {
                int aux=v1;
                while(!fin1.eof() && v1==aux)
                fin1>>v1;
                while(!fin2.eof() && v2==aux)
                fin2>>v2;
            }
        else if(v1<v2)
        {
            cout<<v1<<' ';
            fin1>>v1;
            n3++;
        }
        else
        {
            cout<<v2<<' ';
            fin2>>v2;
            n3++;
        }
    }
    while(!fin1.eof())
    {
        if(v1%5==0)
        {
            cout<<v1<<' ';
            n3++;
        }
        fin1>>v1;
    }
    while(!fin2.eof())
    {
        if(v2%5==0)
        {
            cout<<v2<<' ';
            n3++;
        }
        fin2>>v2;
    }
    if(n3==0)//interclasare
        cout<<"nu exista";
    return 0;
}
