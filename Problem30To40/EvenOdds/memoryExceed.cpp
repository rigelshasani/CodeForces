// https://codeforces.com/problemset/problem/318/A
#include <iostream>
#include <vector>
using namespace std;

// question: is n included when said: add all odds from 1 to n
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    v.push_back(n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            v.push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            v.push_back(i);
        }
    }
    cout << v[k];
    // print_vector(v);
}