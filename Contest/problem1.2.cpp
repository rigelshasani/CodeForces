#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int aliceCoins;
        cin >> aliceCoins;
        int bobCoins;
        cin >> bobCoins;
        if((aliceCoins + bobCoins) % 2 == 0){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }
}