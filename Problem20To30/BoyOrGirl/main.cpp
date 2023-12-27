//https://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string username;
    cin >> username;
    unordered_set<char> uniqueChars;
    for( int i=0; i < username.length() ; i++ ){
        uniqueChars.insert(username[i]);
    }
    if(uniqueChars.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}