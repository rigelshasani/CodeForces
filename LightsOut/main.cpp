#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v2){
        for(int i=0;i<9;i++){
            cout << v2[i];
            if(i == 2 || i == 5 || i == 8){
                cout << "\n";
            }
        }
        cout << endl;
    }

void reverse(vector<int>& v2,int pos){
    if(v2[pos] == 0){
        cout << "here" << endl;
        v2[pos] = 1;
    }
    else{
        cout << "else" << endl;
        v2[pos] = 0;
    }
}

int main(){
    vector<int> v;
    int current;
    int pos;
    while(cin >> current){
        v.push_back(current);
    }
    //creating the second vector to actually make the changes
    vector<int> v2;
    for(int i=0;i<9;i++){
        v2.push_back(1);
    }
    for(auto i =0;i<v.size();i++){
        if(v[i] % 2 == 0){}
        else{
            reverse(v2, i);
            //v2[i] = 0;
            if(i == 0 || i == 6){
                cout << "Test 1: i is 0 or 6" << " Presently i is: "<< i << " elmnt at pos v[i] is: " << v[i] << endl;
                //reverse them respectively
                print(v2);
                cout << endl;
                reverse(v2, i+1);
                print(v2);
                cout << endl;
                reverse(v2, 3);
                print(v2);
                cout << endl;
            }
            // positions
            // 0 1 2
            // 3 4 5
            // 6 7 8
            // this is referenced in i above

            //if the element is in the middle(positions 3 and 5, 4 has a different case)
            else if(i == 3 || i == 5){
                cout << "Test 2: i is 3 or 5" << " Presently i is: "<< i << " elmnt at pos v[i] is: " << v[i] << endl;
                reverse(v2, i-3);
                reverse(v2, i+3);
                reverse(v2, 4);
            }
            //handle case when the element is in positions 1 and 7, middle rows of above and bottom
            else if(i == 1 || i == 7){
                cout << "Test 3: i is 1 or 7" << " Presently i is: "<< i << " elmnt at pos v[i] is: " << v[i] << endl;
                reverse(v2, i-1);
                reverse(v2, i+1);
                reverse(v2, 4);
            }
            else if(i == 2 || i == 8){
                cout << "Test 4: i is 2 or 8" << " Presently i is: "<< i << " elmnt at pos v[i] is: " << v[i] << endl;
                print(v2);
                cout << endl;
                reverse(v2, 5);
                print(v2);
                cout <<endl;
                cout << v2[i-1] << endl;
                reverse(v2, i-1);
                print(v2);
                cout << endl;
            }
        //else its on the middle
            else{    
                cout << "Test 5: i is 4" << " Presently i is: "<< i << " elmnt at pos v[i] is: " << v[i] << endl;                
                reverse(v2, 1);
                reverse(v2, 3);
                reverse(v2, 5);
                reverse(v2, 7);
            }
        }
    }
}


