
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = (celsius * 9 / 5) + 32;

        return { kelvin, fahrenheit };
    }
};

int main() {
    //Shembull
    double temperatureCelsius = 25.0;

    Solution sol;
    vector<double> result = sol.convertTemperature(temperatureCelsius);
    cout << "Temperature in Kelvin: " << result[0] << endl;
    cout << "Temperature in Fahrenheit: " << result[1] << endl;

    return 0;
}