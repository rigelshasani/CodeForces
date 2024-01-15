//https://codeforces.com/problemset/problem/320/A
#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;
    
    if(input[0] == '4'){
        cout << "NO";
        return 0;
    } 
    
    for(int i=0; i < input.length(); i++){
        if(input[i] != 52 && input[i] != 49){
            cout << "NO" << endl;
            return 0;
        }
        if(input[i] == '4' && i > 2){
            if(i != input.length() - 1){
                if(input[i+1] == 52 && input[i+2] == 52){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else{
                if(input[i-1] != 49){
                    if(input[i-2] != 49){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
        }
    } 
    cout << "YES" << endl;
    return 0;
}