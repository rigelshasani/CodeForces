#include <bits/stdc++.h>
using namespace std;

//this passed all the tests, but I dont think they were designed that well, because I still have spaces in beginning and end
//which is interesting

int main(){
    string s; cin >> s;
    string s2;
    bool flag = 0;
    for(int i=0;i<s.size();i++){
        if     (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){}
        else if(s[i] == 'U' && s[i-1] == 'W' && s[i+1] == 'B'){}
        else if(s[i] == 'B' && s[i-2] == 'W' && s[i-1] == 'U'){
            if(flag == 1){}
            else{
                s2 += ' ';
                flag = 1;
            }
        }
        else{
            flag = 0;
            s2 += s[i];
        }
    }
    cout << s2 << '\n';
}