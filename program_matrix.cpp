#include <iostream>

using namespace std;

void identitas (int n)
{for (int i=0; i<n; i++)
{for (int j=0; j<n; j++)
{
    if(i==j) cout<<"l";
    else cout<<"0";}
cout<<endl;
}
}
int main ()\
{
    int n;
    cout<<"Mencetak Matrix Identitas"<<endl;
    cout<<"______"<<endl;
    cout<<"Masukkan Ordo Matrix :";
    cin>>n;
    cout<<endl;
    identitas (n);
}
