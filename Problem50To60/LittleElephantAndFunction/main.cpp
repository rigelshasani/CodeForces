#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    if(k == 1){cout << 1 << endl;return 0;}
    if(k == 2){cout << 2 << " " << 1 << endl;return 0;}
    cout << k << " ";
    for (int i = 1; i < k; i++)
    {
        cout << i << " ";
    }
}