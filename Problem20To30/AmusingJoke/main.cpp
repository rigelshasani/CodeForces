//https://codeforces.com/problemset/problem/141/A
#include <iostream>
using namespace std;

int main(){
    string guestName, hostName, mixedUpLetters;
    cin >> guestName >> hostName >> mixedUpLetters;

    if(guestName.length() + hostName.length() != mixedUpLetters.length()){
        cout << "NO";
    }
    else{
        bool flag2 = true;
        for(int i = 0; i < mixedUpLetters.length();i++){
            bool flag = false;
            for(int j = 0; j < guestName.length(); j++){
                if(mixedUpLetters[i] == guestName[j]){
                    guestName[j] = '!';
                    mixedUpLetters[i] = '!';
                    flag = true;
                }
            }
            for(int j= 0; j < hostName.length();j++){
                if(mixedUpLetters[i] == hostName[j]){
                    hostName[j] = '!';
                    mixedUpLetters[i] = '!';
                    flag = true;
                }
            }
            //a letter has not been found
            if(flag == false){
                flag2 = false;
            }
            
        }
        if(flag2 == false){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }
}