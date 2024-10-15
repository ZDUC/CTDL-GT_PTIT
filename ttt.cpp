#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (auto i : a)
            cout << i.first << " ";
        cout << endl;
        for (auto i : a)
        {
            if (a[i.first] > 1)
                cout << i.first << " ";
        }
        cout << endl;
    }
}