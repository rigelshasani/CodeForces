//https://codeforces.com/problemset/problem/112/A
#include <iostream>
using namespace std;

int main(){
    string firstWord, secondWord;
    cin >> firstWord >> secondWord;
    for( int i=0 ; i < firstWord.length(); i++ ){
        if(int(firstWord[i] <= 90 && firstWord[i] >= 65)){
            firstWord[i] = firstWord[i] + 32;
        }
        if(int(secondWord[i] <= 90 && secondWord[i] >= 65)){
            secondWord[i] = secondWord[i] + 32;
        }
    }
    bool flag = 0;
    for(int i=0; i < firstWord.length(); i++){
        if(firstWord[i] != secondWord[i]){
            if(firstWord[i] > secondWord[i]){
                cout << 1;
                flag = 1;
                break;
            }
            else if(firstWord[i] < secondWord[i]){
                cout << -1;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        cout << 0;
    }

}