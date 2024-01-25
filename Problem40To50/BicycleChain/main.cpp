//https://codeforces.com/problemset/problem/215/A
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int numFront; cin >> numFront;
    vector<int> fronts;
    while(numFront--){
        int k; cin >> k;
        fronts.push_back(k);
    }

    int numBacks; cin >> numBacks;
    int maxRatio = 0;
    int numTotals = 0;
    while(numBacks--){
        int k; cin >> k;
        for(auto& i: fronts){
            if(k % i == 0 && k/i>maxRatio){
                maxRatio = k/i;
                numTotals = 1;
            }
            else if(k % i == 0 && k/i == maxRatio){
                numTotals++;
            }
        }
    }
    cout << numTotals;
}
