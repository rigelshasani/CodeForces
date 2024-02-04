#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    int n = s.size();

    // Check if the length is divisible by k
    if (n % k != 0) {
        cout << -1 << endl;
        return 0;
    }

    // Create a frequency map of characters in the string
    map<char, int> frequency;
    for (char ch : s) {
        frequency[ch]++;
    }

    // Construct the resulting k-string
    string result;
    for (auto it : frequency) {
        char ch = it.first;
        int count = it.second;

        // Check if the frequency is divisible by k
        if (count % k != 0) {
            cout << -1 << endl;
            return 0;
        }

        // Repeat the character count/k times to form the k-string
        result += string(count / k, ch);
    }

    // Repeat the resulting string k times
    for (int i = 0; i < k; i++) {
        cout << result;
    }

    cout << endl;

    return 0;
}
