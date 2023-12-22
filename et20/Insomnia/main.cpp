//69038
//https://codeforces.com/problemset/problem/148/A
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k,l,m,n, d;
    cin >> k >> l >> m >> n >> d;
    int total = 0;
    vector<int> dragons(d,0);

    
    if(k==1 || l==1 || m==1 || n==1){
        cout << d;
    }
    else{
        if(k <= d){
            for(int i=k-1; i<d; i+=k){
                dragons[i] = 1;
            }
        }
        if(l<=d){
            for(int i=l-1; i<d; i+=l){
                dragons[i] = 1;
            }
        }
        if(m<=d){
            for(int i=m-1;i<d;i+=m){
                dragons[i] = 1;
            }
        }
        if(n<=d){
            for(int i=n-1;i<d;i+=n){
                dragons[i] = 1;
            }
        }
        for(int i=0;i<d;i++){
            if(dragons[i] == 1){
                total++;
            }
            //cout << arr[i] << " ";
        }
        cout << total;
    }
    //cout << endl;
}