#include<iostream>
using namespace std;
int main()
{
    for (int i = 5 ; i>=1 ; i--)
    {
        int k=1;
        for (int j=1 ; j<=i ; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}