#include <iostream>
using namespace std;

int main(){
    string word1;
    cin >> word1;
    string word2;
    cin >> word2;

    if(word1.length() != word2.length()){
        cout << "NO";
        return 0;
    }
    for(int i=0; i < word1.length(); i++){
        if(word1[i] != word2[word1.length() - i - 1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}