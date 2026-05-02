#include <iostream>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        int result = 0;
        int copy = n;
        while (n > 0)
        {
            int temp = 0;
            temp = n % 10;
            result += temp * temp * temp;
            n = n / 10;
        }
        return result == copy;
    }
};
int main() {
    Solution s;
    int n = 153;
    cout << s.isArmstrong(n);
    return 0;
}