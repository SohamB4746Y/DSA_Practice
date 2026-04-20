#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number till which you want the pattern"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        char ch = 65 ;    //ASCII VALUE OF 'A'
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<ch;
            if (j<((2*i)+1)/2)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}