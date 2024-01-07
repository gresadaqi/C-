
#include <iostream>

using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int multiple = 2;

        while (true) {
            if (multiple % n == 0) {
                return multiple;
            }
            multiple += 2;
        }
    }
};

int main() {
    //Shembull
    int inputNumber = 5;

    Solution sol;
    int result = sol.smallestEvenMultiple(inputNumber);
    cout << "Smallest even multiple: " << result << endl;

    return 0;
}
