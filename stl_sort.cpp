#include <iostream>
#include<algorithm>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2)
    {
        if (p1.second < p2.second)
        {
            return true;
        }
        else if (p1.second > p2.second)
        {
            return false;
        }
        //Now they are same
        else if (p1.second == p2.second)
        {
            if(p1.first > p2.first)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
int main()
{
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    int n = sizeof(a) / sizeof(a[0]);
    for (auto it : a)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    sort(a,a+n,comp);
    for (auto it : a)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}