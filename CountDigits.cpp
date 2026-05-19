#include <iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while (n > 0)
        {
            count += 1;
            n = n/10;
        }
        return count;
    }
};

int main() {
    Solution s;

    int n = 12345678;

    cout << s.countDigit(n);

    return 0;
}