
#include <iostream>

using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution sol; 

    //E thirrim funksionin e shumës me dy numra të plotë
    int result = sol.sum(5, 7);
    cout << "Sum: " << result << endl;

    return 0;
}