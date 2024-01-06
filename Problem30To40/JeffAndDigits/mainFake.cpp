//as reference, not my work.
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int countOfFives = 0, countOfZeroes = 0;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        if(k == 5) {
            countOfFives++;
        } else {
            countOfZeroes++;
        }
    }
    
    // Find the maximum number of 5s such that their count is a multiple of 9
    countOfFives -= countOfFives % 9;

    if(countOfZeroes == 0) {
        // No zeroes, cannot form a number divisible by 90
        cout << -1;
    } else if (countOfFives == 0) {
        // No fives or not enough fives to make the sum of digits a multiple of 9
        cout << 0;
    } else {
        // Output the largest number
        for(int i = 0; i < countOfFives; i++) {
            cout << 5;
        }
        for(int i = 0; i < countOfZeroes; i++) {
            cout << 0;
        }
    }
    return 0;
}