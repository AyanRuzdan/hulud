#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long int
#define lb cout << endl;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    ll size, time_interval;
    cin >> size >> time_interval >> s;
    while (time_interval--)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
            }
        }
        lb
    }
    cout << s;
    return 0;
}