//https://codeforces.com/problemset/problem/224/A
#include <iostream>
#include <vector>
using namespace std;

void findEdges(vector<int>& v1, vector<int>& v2, vector<int>& v3, int total){
    vector<int> foundPairs;
    int totalMatches = 0;
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    for(int i = 0; i< v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            for(int k = 0; k < v3.size(); k++){
                if(((v1[i] * v2[j]) + (v2[j] * v3[k]) + (v3[k] * v1[i])) == total) {
                    val1 = v1[i];
                    val2 = v2[j];
                    val3 = v3[k];
                    cout << val1 << " " << val2 << " " << val3 << " ";
                }
            }
        }
    }
    // cout << (val1 + val2 + val3 ) * 4;
}

int main(){
    vector<int> areas;
    int totalArea = 0;
    for(int i=0; i< 3; i++){
        int k; cin >> k;
        areas.push_back(k);
        totalArea+= k;
    }
    vector<int> possibleValuesofA;
    vector<int> possibleValuesofB;
    vector<int> possibleValuesofC;
    //find factors of a b and c
    for(int i=1; i <= areas[0];i++){
        if( areas[0] % i == 0 ) possibleValuesofA.push_back(i);
    }
    for(int i=1; i <= areas[1];i++){
        if( areas[1] % i == 0 ) possibleValuesofB.push_back(i);
    }
    for(int i=1; i <= areas[2];i++){
        if( areas[2] % i == 0 ) possibleValuesofC.push_back(i);
    }
    //find the edge distance
    findEdges(possibleValuesofA, possibleValuesofB, possibleValuesofC, totalArea);
}













    // size_t maxi = max(possibleValuesofA.size(), possibleValuesofB.size());
    // maxi = max(maxi, possibleValuesofC.size());

    // for(int i=0;i < maxi;i++){
    //     if(possibleValuesofA[i] + possibleValuesofB[i] + possibleValuesofC[i] == totalArea){
    //         cout << possibleValuesofA[i] + possibleValuesofB[i] + possibleValuesofC[i] * 4;
    //     }
    // }