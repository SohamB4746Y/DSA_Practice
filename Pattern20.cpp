#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number till which you want the pattern :-"<<endl;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        //Stars
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        //Spaces
        for(int j=2*n;j>2*i;j--)
        {
            cout<<" ";
        }
        //Stars
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        //Stars
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        //Spaces
        for(int j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        //Stars
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}