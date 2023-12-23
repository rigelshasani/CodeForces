//https://codeforces.com/problemset/problem/80/A
#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i<= num/2;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;

}

int main(){
    int n,m;
    cin >>n >> m;

    //check if m is prime
    //if so check for primes between
    //-----if there are, output no
    //-----if there arent, output yes
    //else NO
    if(isPrime(m)){
        bool flag= false;
        int checker = n+1;
        while(checker < m){
            if(isPrime(checker)){
                cout << "NO\n";
                flag=true;
                break;
            }
            checker++;
        }
        if(flag==false){
            cout << "YES\n";
        }
    }
    else{
        cout << "NO\n";
    }
}