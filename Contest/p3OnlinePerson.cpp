// By TTTT_TTTT, contest: Hello 2024, problem: (C) Grouping Increases, Pretests passed, #, Copy
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll arrayLength;
        cin >> arrayLength;
        vector<ll> numbers;
        ll count = 0, jj = LONG_LONG_MAX, jb = LONG_LONG_MAX;
        for (int i = 0; i < arrayLength; i++)
        {
            int k;
            cin >> k;
            numbers.push_back(k);

            for (auto &u : numbers)
            {
                cout <<"number: " << u << endl;
                cout <<"jj: " << jj << endl;
                cout <<"jb: "<< jb << endl;
                cout <<"count: "<< count << endl;
                if (jj > jb)
                    swap(jj, jb);
                if (u <= jj)
                    jj = u;
                else if (u <= jb)
                    jb = u;
                else
                {
                    jj = u;
                    count++;
                }
            }
        }
    }
}
//         for(auto u : v)
//         {
//             if(jj>jb) swap(jj,jb);
//             if(u<=jj) jj = u ;
//             else if(u<=jb) jb= u ;
//             else
//             {
//                 jj = u;
//                  cnt++;
//             }

//         }
//         cout<<cnt<<endl;
//     }
// }