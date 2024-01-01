//https://codeforces.com/problemset/problem/450/A
#include <iostream>
#include <deque>
// #include "../../helper/printFunctions.cpp"

using namespace std;

int main(){
    deque<std::pair<int, int>> kids;
    int numOfChildren; cin >> numOfChildren; int candles; cin>>candles;
    for(int i = 1; i <= numOfChildren; i++){
        int k; cin >> k; kids.push_back(std::make_pair(k, i)); 
    }
    //while the deque's size is above 1
    while(kids.size() > 1){
        // if after getting the candles, kid is happy, remove
        if((kids.front().first - candles) <= 0){
            kids.pop_front();
        }
        else{
            //add to end
            kids.front().first -= candles;
            std::pair<int, int> toAdd = kids.front();
            kids.push_back(toAdd);
        }
    }
    cout << kids.front().second;
}
