#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int k; cin >> k;
    if(k == 0){
        cout << 0 << endl;
        return 0;
    }
    int totalAmount = 0;
    vector<int> v;
    for(int i=1;i<=12;i++){
        int month;cin>>month;
        v.push_back(month);
        totalAmount+=month;
    }
    if(totalAmount < k){
        cout << -1;
        return 0;
    }
    sort(v.begin(), v.end());

    // for(auto& i: v){
    //     cout << i << " ";
    // }
    cout << endl;
    int total = 0, count = 0;
    for(auto i=v.size()-1; i >= 0; i--){
        if(total < k){
            count++;
            total += v[i];
        }
        else{
            break;
        }
    }
    cout << count;
}