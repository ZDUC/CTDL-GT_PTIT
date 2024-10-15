#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, ok;
vector<int> svs;
vector<bool> check;
vector<vector<int>> a;
void BFS(int k)
{
    check[k] = 0;
    for (auto i : a[k])
    {
        if (check[i])
        {
            svs[i] = k;
            BFS(i);
        }
        else if (i != svs[k])
        {
            ok = 1;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ok = 0;
        a.clear();
        svs.clear();
        check.clear();
        a.resize(n + 1);
        svs.resize(n + 1, -1);
        check.resize(n + 1, 1);
        for (int i = 1; i < n; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
            if (check[i] && !ok)
                BFS(i);
        if (ok)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}