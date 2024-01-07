
#include <iostream>


using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0;
        int num2 = 0;

        for (int i = 1; i <= n; i++) {
            if (i % m != 0) {
                num1 += i;
            }
            else {
                num2 += i;
            }
        }

        return num1 - num2;
    }
};

int main() {
    //Shembull
    int n = 10;
    int m = 3;

    Solution sol;
    int result = sol.differenceOfSums(n, m);
    cout << "Difference of sums: " << result << endl;

    return 0;
}