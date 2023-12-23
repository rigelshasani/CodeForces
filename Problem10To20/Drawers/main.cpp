//https://codeforces.com/problemset/problem/248/A
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void write_vector(const vector<T>& V)
{
   cout << "The numbers in the vector are: " << endl;
  for(int i=0; i < V.size(); i++)
    cout << V[i] << " ";
}
/*
    1. get the drawer count and insert elements into respective drawers
    2. check the zero count of the left and right drawers
    3. whichever has less zeros, becomes full and whichever has less becomes empty
*/
int main(){
    int drawers;
    cin>>drawers;
    vector<int> leftSide;
    int leftZeroCount =0;
    int rightZeroCount = 0;
    vector<int> rightSide;


    for(int i=0;i<drawers;i++){
        int l, r;
        cin >> l >> r;
        if(l==0){
            leftZeroCount+=1;
        }
        if(r==0){
            rightZeroCount++;
        }
        leftSide.push_back(l);
        rightSide.push_back(r);
    }

    int timeNeeded = 0;

    //change respective sides according to the rule of most open/closed
    for( int i = 0 ; i < drawers; i++ ){
        if( leftZeroCount <= drawers / 2 ){
            if(leftSide[i] == 0){
                leftSide[i] = 1;
                timeNeeded++;
            }
        }
        else{
            if(leftSide[i] == 1){
                leftSide[i] = 0;
                timeNeeded++;
            }
        }
        if( rightZeroCount <= drawers / 2 ){
            if(rightSide[i] == 0){
                rightSide[i] = 1;
                timeNeeded++;
            }
        }
        else{
            if(rightSide[i] == 1){
                rightSide[i] = 0;
                timeNeeded++;
            }
        }
    }
    cout << timeNeeded;














































    // //there are less zeros on the left
    // if( leftZeroCount < rightZeroCount){
    //     if(leftZeroCount == 0){}
    //     else{
    //         for(int i=0;i<drawers;i++){
                
    //             if(leftZeroCount != 0 && rightZeroCount != drawers){

    //                 if(leftSide[i] == 0){

    //                     leftSide[i] = 1;
    //                     timeNeeded++;

    //                 }
    //             }
    //             if(rightZeroCount!=0 && rightZeroCount != drawers){

    //                 if(rightSide[i] = 1){

    //                     rightSide[i] = 0;
    //                     timeNeeded++;

    //                 }
    //             }
    //         }
    //     }
    // }
    // //there are less zeroes on the right
    // else{
    //     //cout << "here";
    //     if(rightZeroCount == 0){
    //         for(int i=0;i<drawers;i++){
    //             if(leftSide[i] == 0){

    //                 leftSide[i] = 1;
    //                 timeNeeded++;

    //             }
    //         }
    //     }
    //     else{
    //         //cout <<"bobby";
    //         for(int i=0;i<drawers;i++){
    //             if(leftSide[i] == 1){

    //                 leftSide[i] = 0;
    //                 timeNeeded++;

    //             }

    //             if(rightSide[i] == 0){

    //                 rightSide[i] = 1;
    //                 timeNeeded++;

    //             }
    //         }
    //     }
    // }

    // cout << timeNeeded;


}