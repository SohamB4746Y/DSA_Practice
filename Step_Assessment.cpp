/*
Talent Discovery: Round 3, Semester 4

Series with embedded Negative Numbers
Difficulty: Easy -> Medium (Progressive)

------------------------------------------------------------
Problem Statement

You are given the beginning of a numerical sequence:

1, 2, -6, 15, 31, -56, 92, 141, -205, 286, 386, -507, 651, 820, -1016, ...

There is a clear mathematical pattern governing how the numbers are generated.

------------------------------------------------------------
Level 1: Pattern Identification & Array Generation

Identify the pattern used to generate the sequence.

Using this pattern, generate the first 100 numbers of the sequence.

Store them in an array of size 100.

Display all the elements of the array (comma-separated).

Print the sum of these 100 numbers.

------------------------------------------------------------
Level 2: Negative Number Pairs

Traverse the array and display all consecutive pairs a[k], a[k+1],
where at least one number in the pair is negative.

If the array contains:
1, 2, -6, 15, 31, -56, ...

Valid output pairs:
2 -6
-6 15
31 -56

------------------------------------------------------------
Level 3: Ascending Sub-Arrays

A sub-array is defined as a continuous sequence of elements.

Task:

Identify and display all maximum-length sub-arrays
where the elements are in strictly ascending order.

That is:
a[k] < a[k+1] < a[k+2] < ... < a[k+n]

Example:

From the sequence:
1, 2, -6, 15, 31, -56, 92, 141, ...

Valid ascending sub-arrays:
1 2
-6 15 31
-56 92 141

------------------------------------------------------------
*/


//ANSWER

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 100;
    int arr[n];

    arr[0] = 1;
    int sum = arr[0];

    for(int i = 1; i < n; i++) {
        int val = abs(arr[i-1]) + i * i;
        if((i + 1) % 3 == 0)
            val = -val;
        arr[i] = val;
        sum += val;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i != n-1) cout << ",";
    }
    cout << endl;
    cout << sum << endl;

    for(int i = 0; i < n-1; i++) {
        if(arr[i] < 0 || arr[i+1] < 0)
            cout << arr[i] << " " << arr[i+1] << endl;
    }

    int start = 0;
    for(int i = 1; i <= n; i++) {
        if(i == n || arr[i] <= arr[i-1]) {
            if(i - start > 1) {
                for(int j = start; j < i; j++) {
                    cout << arr[j];
                    if(j != i-1) cout << " ";
                }
                cout << endl;
            }
            start = i;
        }
    }

    return 0;
}
