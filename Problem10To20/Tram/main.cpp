//https://codeforces.com/problemset/problem/116/A
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

int main(){
    int numStops;
    cin >> numStops;
    vector<int> passengersBeforeStops, passengersAfterStops;
    for( int i = 0 ; i < numStops ; i++ ){
        int passengers = 0;
        cin >> passengers;
        passengersBeforeStops.push_back(passengers);
        cin >> passengers;
        passengersAfterStops.push_back(passengers);
    }

    int maxPassagers = 0;
    int calculateMax = 0;
    for( int i = 0; i < numStops; i++ ){ 
        calculateMax = calculateMax - passengersBeforeStops[i] + passengersAfterStops[i];
        if(calculateMax > maxPassagers){
            maxPassagers = calculateMax;
        }
    }
    cout << maxPassagers;
}