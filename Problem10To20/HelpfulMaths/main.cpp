//https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

template <typename T>
void write_vector(const vector<T>& V)
{
   cout << "The numbers in the vector are: " << endl;
  for(int i=0; i < V.size(); i++)
    cout << V[i] << " ";
}

int main(){
    string input;
    cin >> input;
    vector<int> v;
    for(int i=0;i<input.length();i++){
        if(input[i] != '+'){
            v.push_back(input[i]- '0');
        }
    } 
    //write_vector(v);
    sort(v.begin(), v.end());
    // write_vector(v);

    for( int i=0; i < v.size(); i++ ){
        if(i == v.size()-1){
            cout << v[i] << endl;
        }
        else{
            cout << v[i] << '+';
        }
    }
    
}