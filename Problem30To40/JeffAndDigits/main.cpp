// https://codeforces.com/problemset/problem/352/A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int countOfFives = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 5)
        {
            countOfFives++;
        }
    }
    // cout << "n: " << n << " countofFives: " << countOfFives << endl;
    if (countOfFives < 9)
    {
        if (n - countOfFives == 0)
        {
            cout << -1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        if (n - countOfFives == 0)
        {
            cout << -1;
        }
        else
        {
            // cout << "n: " << n << " countofFives: " << countOfFives << endl;
            int countOfZeroes = n - countOfFives;
            countOfFives -= countOfFives % 9;
            for (int i = 0; i < countOfFives; i++)
            {
                cout << 5;
            }
            // cout << numCount << endl;
            for (int i = 0; i < countOfZeroes; i++)
            {
                cout << 0;
            }
        }
    }
}