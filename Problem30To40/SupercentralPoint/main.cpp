#include <iostream>
#include <vector>
using namespace std;

bool findBiggerAndSmaller(vector<int>&xs, vector<int>&ys, int xToFind, int yToFind, int position){
    //point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
    bool flag1=0, flag2 =0;

    for (int i=0; i<xs.size(); i++) {

        if (xs[i] < xToFind) {
            if(ys[i] == yToFind){
                flag1 = true;
            }
        }
        else if(xs[i] > xToFind){
            if(ys[i] == yToFind){
                flag2 = true;
            }
        }

        if(flag1 && flag2) break;

    }
    if(flag1 && flag2) return true;
    else return false;
}

int main(){
    int n; cin>>n;
    vector<int> xs;
    vector<int> ys;

    for(int i = 0; i< n; i++){
        int x, y;
        cin >> x >> y;
        xs.push_back(x);
        ys.push_back(y);
    }
    bool count = 0;
    bool count2 = 0;
    int counttotal = 0;
    for( int i=0 ; i < n ; i++ ){
        count = findBiggerAndSmaller(xs,ys, xs[i], ys[i], i);
        count2 = findBiggerAndSmaller(ys, xs, ys[i], xs[i], i);

        if(count && count2){
            counttotal++;
        }
    }
    cout << counttotal;

    // cout << endl;
    // print_vector(xs);
    // cout << endl;
    // print_vector(ys);
    
}