//https://codeforces.com/problemset/problem/227/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numOfElements; cin >> numOfElements;
    vector<int> positionVector(numOfElements+1);

    //"array" positionVector stores the element as the position and the position as the element
    //in this way, we can search the element by entering its position....
    for(int i=1; i < numOfElements + 1; i++){
        int num; cin >> num;
        positionVector[num] = i;
    }

    long long vasya = 0, petya = 0;
    int numOfQueries; cin >> numOfQueries;

    //...like here, where vasya is incremented based on the query(search is O(1))
    while(numOfQueries--){
        int query; cin >> query;
        
        vasya += positionVector[query];
        petya += numOfElements - positionVector[query] + 1;
    }
    cout << vasya << " " << petya;
}