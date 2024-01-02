#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numOfChildren, candlesGivenEachTime; cin >> numOfChildren >> candlesGivenEachTime;
    double maxTimesVisited=0;
    int last;
    for(int i = 0 ; i < numOfChildren; i++ ){
        double kidCandlesWanted;
        cin >> kidCandlesWanted;
        if(ceil(kidCandlesWanted / candlesGivenEachTime) >= maxTimesVisited){
            maxTimesVisited = ceil(kidCandlesWanted / candlesGivenEachTime);
            last = i+1;
        }
    }
    cout << last;
}



































// int main(){
//     int numOfChildren, candles, last=0;
//     double t, max(0);
//     cin >> numOfChildren >> candles;

//     for(int i= 1; i<= numOfChildren; i++){
//         cin >> t;
//         //this calculates how many times a kid would have to go through the line again
//         if(ceil(t / candles) >= max){
//             last = i;
//             max = ceil(t / candles);
//         }
//     }

//     cout << last << '\n';
//     return 0;
// }