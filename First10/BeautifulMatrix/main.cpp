//This solution does not work, but I think it's an interesting POV. The problem with this is 
// that it's a brute force solution, and I don't know how to elevate my programming to an 
//"algorithm" level where I can use a function to return the quickest way to get there.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countItems = 0;
int countMoves = 0;
int input = 0;

void insert(vector<int>& v){
    for(int i=0;i<5;i++){ //rows
        for(int j=0;j<5;j++){  //columns
            cin >> input;
            v.push_back(input);
        }
    }
}

void swapp(vector<int>& v){
    //if the 1 is found on the left side of the board
    if(countItems < 13){//13 is the middle point
        while(countItems < 13){
            v[countItems] = 0;
            v[countItems+1] = 1;
            countItems++;
            countMoves++;
        }
        //cout << countMoves << endl;
        return;
    }
    else if(countItems== 13){
        return;
    };
    while(countItems > 13){
        v[countItems-2] = 0;
        v[countItems-1] = 1;
        countItems--;
    }
}

int main(){
    //take inputs
    vector<int> v;
    insert(v);
    for(auto i=v.begin();i != v.end();i++){
        countItems++;
        if(*i == 1){
            swapp(v);
            //countMoves++;
        }
        //cout << *i << "";
    }
    cout << countMoves << endl;

    //0 0 0 0 0 0 0 0 0 1 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
}
