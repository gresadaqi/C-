
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string result;

        for (char c : s) {
            result += tolower(c);
        }

        return result;
    }
};

int main() {
    // Shembull
    string inputString = "Hello World";

    Solution sol;
    string result = sol.toLowerCase(inputString);

    cout << "Lowercased string: " << result << endl;

    return 0;
}