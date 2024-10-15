#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, a = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s += x;
            a = max(a, s);
            if (s < 0)
                s = 0;
        }
        cout << a << endl;
    }
}