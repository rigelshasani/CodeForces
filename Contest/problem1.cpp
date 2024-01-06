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
        bool turn = 0;
        while (aliceCoins != 0 && bobCoins != 0)
        {
            if (aliceCoins > bobCoins)
            {
                aliceCoins--;
                turn = !turn;
            }
            else if (bobCoins > aliceCoins)
            {
                bobCoins--;
                turn = !turn;
            }
            if (aliceCoins == bobCoins)
            {
                if (turn == 1)
                {
                    cout << "Alice" << endl;
                    break;
                }
                else
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
        }
    }
}