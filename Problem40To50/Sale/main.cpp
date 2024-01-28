#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int numTvs; cin >> numTvs;
    int numCanCarry; cin >> numCanCarry;
    int bellars = 0;
    vector<int> v;
    while(numTvs--){
        int k; cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    int total = 0;
    int prevtotal = total;
    for(int i= 0; i<numCanCarry; i++){
        if(total+ v[i] < prevtotal){
            total += v[i];
        }
        else{break;}
        prevtotal = total;
    }
    cout << abs(total);
}