//https://codeforces.com/problemset/problem/227/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numOfElements; cin >> numOfElements;
    vector<int> positionVector(numOfElements+1);

    for(int i=1; i < numOfElements + 1; i++){
        int num; cin >> num;
        positionVector[num] = i;
    }

    long long vasya = 0, petya = 0;
    int numOfQueries; cin >> numOfQueries;

    while(numOfQueries--){
        int query; cin >> query;
        
        vasya += positionVector[query];
        petya += numOfElements - positionVector[query] + 1;
    }
    cout << vasya << " " << petya;
}