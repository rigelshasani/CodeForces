//https://codeforces.com/problemset/problem/227/B
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //get data 
    int numberOfElements;
    cin >> numberOfElements;
    vector<int> v;
    int element;
    int nom = numberOfElements;
    while(nom--){
        cin >> element;
        v.push_back(element);
    }
    int numOfQueries;
    cin >> numOfQueries;
    vector<int> queries;
    int noq = numOfQueries;
    while(noq--){
        cin >> element;
        queries.push_back(element);
    }
    //perform linear search
    int vasya = 0;
    int petya=0;
    for(int i=0; i<numOfQueries;i++){
        for(int j=0;j<numberOfElements;j++){
            vasya++;
            if(v[j] == queries[i]){
                petya += numberOfElements - j;
                break;
            }
        }
    }
    //compare data
    cout << vasya << " " << petya;

}