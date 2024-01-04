#include <iostream>
#include <vector>
using namespace std;

void findSmallestDifference(vector<int> v)
{
    int minimum = 1001;
    int sol1 = -1, sol2 = -1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (i == 0)
        {
            if (abs(v[0] - v[v.size() - 1]) < minimum)
            {              
                minimum = abs(v[0] - v[v.size() - 1]);

                sol1 = 1;
                sol2 = v.size();
            }
            if (abs(v[1] - v[0]) < minimum)
            {
                minimum = abs(v[1] - v[0]);

                sol1 = 2;
                sol2 = 1;
            }

        }
        else
        {
            //cout << minimum;
            if (abs(v[i + 1] - v[i]) < minimum)
            {
                //cout << i << endl;
                //cout << abs(v[i+1] - v[i]);
                minimum = abs(v[i+1] - v[i]);
                sol1 = i+2;
                sol2 = i + 1;
            }
        }
    }
    cout << sol2 << " " << sol1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    findSmallestDifference(v);
}
