//https://codeforces.com/problemset/problem/272/A
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numOfFriends;cin>>numOfFriends;
    int sum = 0;
    for( int i=1 ; i < numOfFriends+1; i++ ){
        int element; cin >> element;
        sum += element; 
    }
    int total = 0;
    //we need to make sure it doesnt land on dima
    //sum of fingers / num of people should not be 0
    for(int dimasFinger=1; dimasFinger<= 5;dimasFinger++){
        if((sum + dimasFinger) % (numOfFriends+1) != 1 ){
            total++;
        }
    }      

    cout << total;
}