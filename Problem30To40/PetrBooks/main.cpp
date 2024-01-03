#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 1; i <= 7; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    int total = 0;
    int found = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            total += v[j-1];
            if (total >= n)
            {
                found = j;
                break;
            }
        }
        if (found != 0)
        {
            break;
        }
    }
    cout << found;
}
// int mon, tue, wed, thur,fri,sat,sun;
// cin >> mon >> tue >> wed >> thur >> fri >> sat >> sun;
// int totalPages = mon+tue+wed+thur+fri+sat+sun;
// cout << totalPages;