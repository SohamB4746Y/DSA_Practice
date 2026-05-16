class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        if (n/10 > 0)
        {
            count += 1;
            n = n/10;
        }
        else
        {
            return (count);
        }
    }
};