#include <iostream>
using namespace std;

int main()
{
    // line of n people
    // no less than A people in front of him
    // no more than B people behind him
    // find the number of positions he can occupy
    int n, a, b;
    cin >> n >> a >> b;
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        // 0, 1, 2, 3, 4
        //  2 - 2 >= 0 && 2 + 3 < 5
        if (max(a+1, n-b) <= i)
        {
            total += 1;
        }
    }
    cout << total << endl;
}