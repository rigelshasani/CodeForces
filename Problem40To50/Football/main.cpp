#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    string t1, t2;
    cin >> t1;
    n--;
    int countt1 = 1, countt2= 0;
    while(n--){
        string k;
        cin >> k;
        if(k == t1){
            countt1 += 1;
        }
        else{
            t2 = k;
            countt2 += 1;
        }
    }
    if(countt1 > countt2){
        cout << t1 << endl;
        return 0;
    }
    else{
        cout << t2 << endl;
    }
    
}