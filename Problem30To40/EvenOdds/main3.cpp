// https://codeforces.com/problemset/problem/318/A
#include <iostream>
#include <vector>
// #include "../../helper/printFunctions.cpp"
using namespace std;

// question: is n included when said: add all odds from 1 to n
int main()
{
    long long n, k;
    cin >> n >> k;

    vector<int> v;
    v.push_back(n);

    long long numOdds = (n+1) /2;
    // k is less than n / 2
    if (k <= numOdds)
    {
        //cout << "inside 1" << endl;
        cout << 2 * k - 1 << endl;
    }
    else
    {
        //cout << "inside 2" << endl;
        // the end of the odds
        // the fuck do i need this for
        // it tells me where I should start counting evens
        // structure of arr: 1 + odds + evens = n
        //                   1 + n/2+1 + evens = n
        //                   1 + n/2+1
        // cout << n << endl;
        // cout << n / 2 + 1 << endl;
        // cout << k - (n / 2) + 1 << endl;


        //cout << abs(k - (n/2 +2 )) <<endl;
        //cout << n;
        //we know k's position
        //position 5 means after the 1 + 
        // cout << n / 2 + 1;
        // cout << k;

        //cout << numOdds << endl;
        cout << 2 * (k - numOdds) << endl;

    }
    // print_vector(v);
}