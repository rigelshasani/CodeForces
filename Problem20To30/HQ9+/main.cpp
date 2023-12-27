#include <iostream>
using namespace std;

int main(){
    string command;
    cin >> command;
    bool flag = 0;
    for(int i=0; i< command.length(); i++){
        if(command[i] == 'H' || command[i] == '9' || command[i] == 'Q' || command[i] == 9 ){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}