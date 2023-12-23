//https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string word;
    cin >> word;


    //65-90 upper
    //97-122 lower
    if(word[0] > 97){
        word[0] -= 32;
    }

    

    cout << word;

}