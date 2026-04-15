#include<iostream>
using namespace std;
int main()
{
    //int n = 1;
    //int k = 0;
    for (int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            int n = 1;
            for(int j=0;j<=i;j++)
            {
                cout<<" "<<n;
                n=1-n;
            }
            cout<<endl;
        }
        else
        {
            int k = 0;
            for(int j=0;j<=i;j++)
            {
                cout<<" "<<k;
                k=1-k;
            }
            cout<<endl;
        }
    }
}