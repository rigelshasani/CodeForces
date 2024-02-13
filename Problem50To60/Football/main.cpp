#include <iostream>
using namespace std;

int main()
{
    string players; cin >> players;
    int count = 0;
    for(int i=0;i<players.length();i++){
        if(i==0){count=1;}
        else{
            if(players[i] == players[i-1]){
                count++;
            }
            else{
                count = 1;
            }
        }
        if(count == 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}