#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        int copy = x;
        while (x != 0)
        {
            reverse = reverse * 10 + (x % 10);
            x = x / 10;
        }
        return (reverse == copy);
    }
};
int main() {
    Solution s;
    int x = 121;
    cout << s.isPalindrome(x);
    return 0;
}