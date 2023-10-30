#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t1=0, t2=0, t3=0;

    while(n--){
        int a, b, c = 0;
        cin >> a >> b >> c;
        t1 += a;
        t2 += b;
        t3 += c;
    }
    if(t1 != 0 || t2 != 0 || t3 != 0){
        cout << "NO" << endl;
    }
    else{
        if((t1 + t2 + t3) == 0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

}