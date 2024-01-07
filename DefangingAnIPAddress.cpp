#include <iostream>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string defangedAddress;

        for (char c : address) {
            if (c == '.') {
                defangedAddress += "[.]";
            }
            else {
                defangedAddress += c;
            }
        }

        return defangedAddress;
    }
};
int main() {
    //Shembull
    string ipAddress = "192.168.1.1";

    Solution sol;
    string result = sol.defangIPaddr(ipAddress);
    cout << "Defanged IP Address: " << result << endl;

    return 0;
}

}