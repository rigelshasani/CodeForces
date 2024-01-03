//https://codeforces.com/problemset/problem/224/A
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    vector<int> areas;
    int totalArea = 0;
    for(int i=0; i< 3; i++){
        int k; cin >> k;
        areas.push_back(k);
        totalArea+= k;
    }
    //BEAUTIFUL ELEGANCE!!!!!!!!!!!!!!!!!!!
    int a = 0, b = 0, c= 0;
    a = sqrt(((areas[0] * areas[2]) / areas[1]));
    b = areas[0] / a;
    c = areas[2] / a;
    cout << 4*(a+b+c);
}