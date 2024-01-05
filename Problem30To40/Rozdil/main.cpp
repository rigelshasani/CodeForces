//https://codeforces.com/problemset/problem/205/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    long min = 15000000000;

    for(int i=1 ; i <= n ; i++){
        int k; cin >> k;
        if(k < min){
            min = k;
        }
        v.push_back(k);
    }

    int minCount = 0;
    int minLoc = 0;
    for(int i = 1; i <= n; i++){
        if(v[i-1] == min){
            minCount++;
            minLoc = i;
        }
        if(minCount == 2){
            break;
        }
    }
    if(minCount > 1){
        cout << "Still Rozdil";
    }
    else{
        cout << minLoc;
    }
    //if the minimum has only 1 value: print it
    //else print still
}