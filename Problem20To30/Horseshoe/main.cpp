//https://codeforces.com/problemset/problem/228/A
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int hoofsNeeded = 0;
    unordered_set<int> unique;
    unique.insert(a);
    unique.insert(b);
    unique.insert(c);
    unique.insert(d);

    if(unique.size() == 4){
        cout << 0;
    }
    else if(unique.size() == 3){
        cout << 1;
    }
    else if(unique.size() == 2){
        cout << 2;
    }
    else{
        cout << 3;
    }    
    //I need to search through the vector and 


    // for( int i = 0; i < 4 ; i++ ){
    //     for(int j = 0; j < 4; i++){
    //         if( j != i ){
    //             if(hoofColors[i] == hoofColors[j]){
    //                 hoofsNeeded++;
    //             }
    //         }
    //     }
    // }
}