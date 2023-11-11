#include <bits/stdc++.h>
using namespace std;

int counter(string digits){
    int count = 0;
    for(int i=0;i<digits.length();i++){
        for(int j=0;j<digits.length();j++){
            if(digits[i] == digits[j]){
                count++;
            }
        }
    }
    return count;

}


int main(){
    int counted = 0;
    int input;
    cin >> input;
    
    while(counted != 4){
        //2031
        stringstream os;
        input++;
        os << input;
        string digits  = os.str();
        counted = counter(digits);
    }
    cout << input << endl;

    //What do i want this to do?

    //Keep incrementing the year until a year is found that has all unique digits
    //increment year
    //check digits

    // 1 9 7 3
    // ^
    //   ^ ^ ^
    //   ^
    // ^   ^ ^
    //     ^ 
    // ^ ^   ^
    //       ^
    // ^ ^ ^
 
}
