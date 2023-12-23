//https://codeforces.com/problemset/problem/233/A
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    //5
    //1 2 3 4 5
    //3 1 2 5 4
    if(n % 2 != 0){
        cout << -1 << "\n";
    }
    else{
        for(int i=1;i<n;i+=2){
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }
}