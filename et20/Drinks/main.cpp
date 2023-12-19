//https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numDrinks;
    cin >> numDrinks;
    vector<int> drinkPercentage;
    int drinkPerc;
    while(cin >> drinkPerc){
        drinkPercentage.push_back(drinkPerc);
    }
    double total;
    for(int i=0;i<drinkPercentage.size();i++){
        total += (drinkPercentage[i]);
    }
    total = (total / numDrinks);
    cout << total;
}