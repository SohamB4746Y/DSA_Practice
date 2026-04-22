#include<iostream>
using namespace std;
int main()
{
    char ch = 69 ;    //ASCII VALUE OF 'E'
    for (int i = 0;i<5;i++)
    {
        char n = ch;
        for(int j = 0;j<=i;j++)
        {
            cout<<n<<" ";
            n++;
        }
        ch--;
        cout<<endl;
    }
}