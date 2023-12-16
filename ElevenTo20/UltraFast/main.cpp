//https://codeforces.com/problemset/problem/61/A
#include <iostream>
using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    string answer;
    for(int i=0;i<num1.length();i++){
        if(num1[i] == num2[i]){
            answer += '0';
        }
        else{
            answer += '1';
        }
    }    
    cout << answer<< '\n';
}