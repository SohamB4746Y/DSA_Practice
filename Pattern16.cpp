#include<iostream>
using namespace std;
int main()
{
    char ch = 65 ;    //ASCII VALUE OF 'A'
    for (int i = 0;i<5;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}