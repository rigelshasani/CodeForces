//https://codeforces.com/problemset/problem/266/A
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string stones;
    cin >> stones;
    int num = 0;

    if(stones.length() == 1){}
    else{
        if(stones.length() == 2){
            if(stones[0] == stones[1]){
                num++;
            }
        }
        else{
            for(int i=0;i<=stones.length()-3;i++){
                if(stones[i] == stones[i+1]){
                    if(stones[i] == stones[i+1] == stones[i+2]){}
                    else{num++;}
                }
            }
            if(stones[stones.length()-1] == stones[stones.length()-2]){
                num++;
            }
        }
    }
    cout << num << endl;
}