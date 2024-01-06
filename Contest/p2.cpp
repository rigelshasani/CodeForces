#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int length; cin >> length;
        int sum = 0;
        int sumsums = 0;
        int sss = 0;
        for(int i = 0; i < length; i++){
            char k; cin >> k;
            if(k == '-'){
                sum -= 1;
            }
            else{
                sum += 1;
            }
            sss += abs(sum) * 1;
            sumsums = sss;
            sss = 0;
        }
        cout << sumsums << endl;
    }
}