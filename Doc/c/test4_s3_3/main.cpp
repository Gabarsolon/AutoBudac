//2021_test4_sub3_p3
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin1("bac1.txt");
    ifstream fin2("bac2.txt");
    ///ineficient
    int v1[100001],v2[100001],v3[100001];
    int n1,n2,n3;
    fin1>>n1;
    for(int i=1;i<=n1;i++)
        fin1>>v1[i];
    fin2>>n2;
    for(int i=1;i<=n2;i++)
        fin2>>v2[i];
    //interclasare
    int i=1,j=1,k=1;
    while(i<=n1 && j<=n2)
    {
        if(v1[i]%5!=0)
            i++;
        else if(v2[j]%5!=0)
            j++;
        else if(v1[i]==v2[j])
            i++,j++;
        else if(v1[i]<v2[j])
            v3[k++]=v1[i++];
        else
            v3[k++]=v2[j++];
    }
    while(i<=n1)
        if(v1[i]%5!=0)
        v3[k++]=v1[i++];
    while(j<=n2)
        if(v2[j]%5!=0)
        v3[k++]=v2[j++];
    n3=k-1;//n3=n1+n2;
    if(n3>0)
    for(i=1;i<=n3;i++)
        cout<<v3[i]<<' ';
    else
        cout<<"nu exista";
    return 0;
}
