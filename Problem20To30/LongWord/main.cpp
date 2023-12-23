#include <bits/stdc++.h>
using namespace std;

int main(){
    //get all the words
    int n;
    cin >> n;

    //i cant believe this worked. I had the issue that after inputting n, the for loop would still look inside 
    //the first line, which contained only a number. I used the cin.ignore to flush till the end of the line
    //to flush till the end of the buffer, remove the '\n' at the end
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<string> v;

    for(int i=0;i<n;i++){
        string s;
        getline(cin, s);
        v.push_back(s); 

        //cout << "V["<< i << "]: " << v[i] << endl;

        //make em shorter
        if(v[i].length() > 10){
            cout << v[i][0] << v[i].length()-2 << v[i][(v[i].length())-1] << endl;
        }
        else{
            cout << v[i] << endl;
        }
    }
}