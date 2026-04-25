#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How long should be the square:-"<<endl;
    cin>>n;
    for(int i =0;i<2*n-1;i++)
    {
        for(int j = 0 ;j<2*n-1;j++)
        {
            int top = i;
            int left = j;
            int right = 2*n-1-1-j;
            int bottom = 2*n-1-1-i;
            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}