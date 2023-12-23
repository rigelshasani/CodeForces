#include <bits/stdc++.h>
using namespace std;

int main(){
    int numOfChildren, time;
    cin >> numOfChildren >> time;
    vector<char> queue;
    char input;
    while(cin.get(input)){
        queue.push_back(input);
    }
    while(time>0){
        for(int i=0;i<numOfChildren;i++){
            //cout << "Current element is a: "<< queue[i] << endl;
            if(queue[i] == 'B' && queue[i+1] == 'G'){
                //cout << "Setting.." << endl;
                queue[i] = 'G';
                queue[i+1] = 'B';
                i++;
            }
        }
        time--;
    }
    for(char& i : queue){
        cout << i << "";
    }
}


//BGGBG
//ITERATION 1: GBGBG
//ITERATION 2: GGBBG
//ITERATION 3: GGBGB