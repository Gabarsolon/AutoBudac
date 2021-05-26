///Exercitiul 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Introdu numarul n: ";
    cin>>n;
    cout<<"Primele "<<n<<" patrate perfecte sunt: ";
    for(int i=1;i<=n;i++)
        cout<<i*i<<" ";
    return 0;
}
