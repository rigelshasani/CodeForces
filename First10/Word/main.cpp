//https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string word;
    cin >> word;

    int length = word.length();
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    //increases the lowercase and uppercase count based on the ASCII of the word
    for(int i=0; i<length ;i++){
        //cout << "Ascii of "<< word[i] << " is " << int(word[i]) << endl; 
        //cout << endl;
        if(int(word[i] < 97)){
            //uppercase
            uppercaseCount++;
        }
        else{
            lowercaseCount++;
        }
    }
    //65-90 upper
    //97-122 lower

    //cout << (uppercaseCount > (length / 2)) << endl;
    //if there are more uppercase than lowercase letters
    if(uppercaseCount > (length / 2)){
        //make everything uppercase
        for(int i=0;i<length;i++){
            if(int(word[i]) >= 97){
                word[i] -= 32;
            }
        }
    }
    //make everything lowercase
    else{
        for(int i=0;i<length;i++){
            //cout << "ASCII of " << word[i] << " is " << int(word[i])<< endl;
            if(word[i] < 97){
                word[i] += 32;
            //cout << "ASCII of " << word[i] << " is " << int(word[i])<< endl;
            }

        }
    }

    cout << word;

}