//https://codeforces.com/problemset/problem/205/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    long min = 15000000000;
    int minCount = 1;
    int minLoc = 0;

    for(int i=1 ; i <= n ; i++){
        int k; cin >> k;
        if(k < min){
            min = k;
            minLoc = i;
            minCount = 1;
        }
        else if(k == min){
            minCount += 1;
        }
    }
    if(minCount == 1){
        cout << minLoc;
    }
    else{
        cout << "Still Rozdil";
    }
    //if the minimum has only 1 value: print it
    //else print still
}