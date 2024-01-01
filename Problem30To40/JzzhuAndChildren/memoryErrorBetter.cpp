#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int numOfChildren;
    std::cin >> numOfChildren;
    int candles;
    std::cin >> candles;

    std::pair<int, int> kids[numOfChildren]; // Array of pairs

    for (int i = 0; i < numOfChildren; i++) {
        int k;
        std::cin >> k;
        kids[i] = std::make_pair(k, i + 1);
    }

    int start = 0; // Start of the queue
    int end = numOfChildren; // End of the queue

    while (end - start > 1) {
        if ((kids[start].first - candles) <= 0) {
            start++;
        } else {
            kids[start].first -= candles;
            kids[end] = kids[start]; // Move the modified pair to the end
            end++;
            start++;
        }
    }

    std::cout << kids[start].second << std::endl;

    return 0;
}