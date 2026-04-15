#include<iostream>
using namespace std;
int main()
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int k=4;k>0;k--)
    {
        for(int j = 0;j<k;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
