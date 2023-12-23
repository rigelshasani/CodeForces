#include <iostream>
using namespace std;

int main(){
    string word;
    cin >> word;

    //65-90 upper
    //97-122 lower
    int length = word.length();
    int luckiCount = 0;

    //cout << "length is: " << length << endl;
    for(int i=0;i<length;i++){
        int num = int(word[i]) - int('0');
        if(num == 4 || num == 7){
            luckiCount++;
    }    
        else{
            //cout << "not lucki" << endl;
        }
    //cout << "lucki count is: " << luckiCount << endl;
    }
    if(luckiCount == 4 || luckiCount == 7){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}