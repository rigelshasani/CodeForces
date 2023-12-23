//https://codeforces.com/problemset/problem/144/A
#include <iostream>
using namespace std;

void swap(int v[], int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

int main(){

    int n;
    cin >> n;
    int arr[n] = {0};
    int curr;
    for(int i=0;i<n;i++){
        cin >> curr;
        arr[i] = curr;
    }
    //cout << "length" << " " << n << endl;
    //loop through the array
    //keep track of the smallest and biggest member and their location
    int mini = arr[0];
    int minipos = 0;
    int maxi = arr[0];
    int maxipos = 0;
    for(int i=0;i<n;i++){
        // cout << "mini: " << mini << " maxi: " << maxi << " i: " << i  << " maxipos: " << maxipos<< endl;
        if(arr[i] <= mini){
            mini = arr[i];
            minipos = i;
        }
        if(arr[i] > maxi){
            //cout << "maxi updated to " << maxi << "in position: " << i <<endl;
            maxi = arr[i];
            maxipos = i;
        }
    }
    // cout << "minimum value is:" << mini << " and its located at position: " << minipos << endl;
    // cout << "maximum value is:" << maxi << " and its located at position: " << maxipos << endl;
    // cout << endl;
    int seconds = 0;
    //using their location, swap accordingly
    if(arr[0] != maxi || arr[n-1] != mini){
        while(maxipos != 0){//&& minipos != n-1){
                // cout << "Before change" << endl;
                // for(int i=0;i<n;i++){
                //     cout << arr[i] << " ";
                // }
                // cout<<endl;
                if(arr[maxipos-1] == mini && maxipos-1 == minipos){
                    minipos++;
                }
                swap(arr, maxipos, maxipos-1);
                // cout << "After change" << endl;
                // for(int i=0;i<n;i++){
                //     cout << arr[i] << " ";
                // }
                // cout<<endl;
                maxipos -=1;
                seconds++;
        }
        // cout << seconds << endl;
        while(minipos != n-1){
            if(arr[minipos+1] == maxi && minipos+1 == maxipos){
                    maxipos--;
                }
            // cout << "Before change" << endl;
            // for(int i=0;i<n;i++){
            //     cout << arr[i] << " ";
            // }
            // cout<<endl;
            swap(arr, minipos, minipos+1);
            // cout << "After change" << endl;
            // for(int i=0;i<n;i++){
            //     cout << arr[i] << " ";
            // }
            // cout<<endl;
            minipos +=1;
            seconds++;  
        }
        // cout << seconds << endl;

    }
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
    cout << seconds;

    
    // // for(int i=0;i<n;i++){
    // //     cout << arr[i] << " ";
    // // }
    // //cout << endl;
}