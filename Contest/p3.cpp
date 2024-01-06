#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int total = 0;
        int arrayLength;
        cin >> arrayLength;
        int a; cin >> a;
        int prev = a;
        bool real = 0;
        for (int i = 0; i < arrayLength -1; i++)
        {
            int b;
            cin >> b;
            if (b > prev)
            {
                cout << "b: " << b << " prev: " << prev << endl;
                if(i == 0 || i == arrayLength-2){
                    real = 1;
                }
                total++;
            }
            prev = b;
        }
        if (total > 1)
        {
            cout << total - 1 << endl;
        }
        else if(total == 1){
            if(real){
                cout << 0 <<endl;
            }
            else{
                cout << 1 << endl;
            }

        }
        else
        {
            cout << total << endl;
        }
    }
}