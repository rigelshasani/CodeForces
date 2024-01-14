#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int numHouses, numTasks; cin >> numHouses >> numTasks;
    
    int location = 1;
    long long int answer = 0;
    for(int i=0; i<numTasks;i++){
        int now; cin >> now;
        if(now >= location) answer += now - location;
        else{
            answer += numHouses - (location - now);
        }
        location = now;
    }
    cout << answer;
}