// https://codeforces.com/problemset/problem/318/A
#include <iostream>
#include <vector>
//#include "../../helper/printFunctions.cpp"
using namespace std;

// question: is n included when said: add all odds from 1 to n
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    v.push_back(n);
    // k is less than n / 2
    if (k <= (n / 2))
    {
        //cout << "inside 1" << endl;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 != 0)
            {
                v.push_back(i);
            }
        }
        cout << v[k];
    }
    else
    {
        //cout << "inside 2" << endl;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                v.push_back(i);
            }
        }
        //cout << n/2 << endl;
        if(n % 2 == 0){
            cout << v[k - (n/2) ] << endl;
        }
        else{
            cout << v[k - (n/2) - 1] << endl;
        }
    }
    //print_vector(v);
}