#include<iostream>
using namespace std;
int main()
{
    for (int i = 0;i<5;i++)
    {
        char ch = 65 ;    //ASCII VALUE OF 'A'
        for(int j = 0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}