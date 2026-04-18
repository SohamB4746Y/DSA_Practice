#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number till which you want the pattern:-"<<endl;
    cin>>n;
    n=2*n;
    cout<<endl;
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=0;j<n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}