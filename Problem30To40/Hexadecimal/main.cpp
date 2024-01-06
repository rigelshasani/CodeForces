#include <iostream>
#include <vector>
using namespace std;

int getnthFib(int n){
    if(n == 0){
        cout << "0 0 0";
        return 0;
    }
    if(n == 1){
        cout << "1 0 0";
        return 0;
    }
    if(n== 2){
        cout << "0 1 1";
        return 0;
    }
    int prevprev = 0;
    int prev = 1;
    int currentNum;
        for(int i= 2; i < n; i++){
            currentNum = prevprev + prev;
            prevprev = prev;
            prev = currentNum;
            if(prevprev + prev + currentNum == n){
                cout << prevprev << " " << prev << " "  << currentNum << endl;
                break;
            }
        }
    return currentNum;
}

int main(){
    int n; cin >> n;
    getnthFib(n);
}