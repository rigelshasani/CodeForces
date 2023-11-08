//https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    for(int r=1;r < 6;r++){
        for(int c=1;c<6;c++){
            cin >> n;
            if(n == 1){
                cout << abs(3-r) + abs(3-c);
            } 
        }
    }
}