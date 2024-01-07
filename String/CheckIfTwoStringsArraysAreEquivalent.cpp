
#include <iostream>
#include <vector>

using namespace std;


 class Solution {
      public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;

        for (const string& word : word1) {
            str1 += word;
        }

        for (const string& word : word2) {
            str2 += word;
        }

        return str1 == str2;
    }

};

int main() {
    vector<string> word1 = { "ab", "c" };
    vector<string> word2 = { "a", "bc" };

    Solution sol;
    bool result = sol.arrayStringsAreEqual(word1, word2);

    cout << (result ? "Yes" : "No") << endl;

    return 0;
}
