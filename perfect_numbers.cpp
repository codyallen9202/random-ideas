// Calculates Perfect Numbers
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> perfectNumbers;
    vector<int> divisors;
    int sum = 0;
    
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                divisors.push_back(j);
            }
        }
        for (int k = 0; k < divisors.size(); k++) {
            sum += divisors[k];
        }
        
        if (sum == i) {
            perfectNumbers.push_back(i);
        }
        
        divisors.clear();
        sum = 0;
    }
    
    for (int i = 0; i < perfectNumbers.size(); i++) {
        cout << perfectNumbers[i] << ", ";
    }

    return 0;
}
