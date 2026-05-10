#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
        int reverse = 0;
        while (n > 0)
        {
            reverse = reverse * 10 + (n % 10);
            n = n / 10;
        }
        return reverse;
    }
};
int main() {
    Solution s;
    int n = 12345;
    cout << s.reverseNumber(n);
    return 0;
}