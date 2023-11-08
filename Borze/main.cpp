#include <bits/stdc++.h>
using namespace std;

int main(){
    string letters;
    cin >> letters;

    for(int i=0;i<letters.length();i++){
        if(letters[i] == '-' && letters[i+1] == '-'){
            cout << 2;
            i++;
        }
        else if(letters[i] == '-' && letters[i+1] == '.'){
            cout << 1;
            i++;
        }
        else{
            cout << 0;
        }
    }
}