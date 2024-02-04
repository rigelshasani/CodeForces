#include <string>
#include <set>
#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string word;
    cin >> word;

    set<char> us;
    int total = 0;
    for (auto &i : word)
    {
        total += i;
        us.insert(i);
    }
    int totalset = 0;
    for (auto &i : us)
    {
        totalset += i;
    }
    if (total % totalset != 0)
    {
        cout << -1 << '\n';
        return 0;
    }
    for (int i = 0; i < k; i++)
    {
        for (auto &i : us)
        {
            cout << i;
        }
    }
}