// https://codeforces.com/problemset/problem/214/A
#include <bits/stdc++.h>
using namespace std;

#define u unsigned
#define us u short
#define ll long long
#define ull u ll

void solve()
{
    int n, m, q = 0;
    cin >> n >> m;
    for (int a = 0; a <= sqrt(n); ++a)
        if (n - a * a == sqrt(m - a))
            ++q;
    cout << q << endl;
}

int main(int argc, char **argv)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::srand(time(nullptr));

    solve();
}