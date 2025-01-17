#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define pb push_back
#define ll long long
#define FORU(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define reset(a) memset(a, 0, sizeof(a))
#define mii map<int, int>
#define all(v) v.begin(), v.end()

ll MOD = 1e9 + 7;

ll val[200005], ans[200005];
vi edge[200005];

void DFS(int u)
{
    for (int v : edge[u])
    {
        DFS(v);
        val[u] += val[v] + 1;
        ans[u] += ans[v];
    }

    ans[u] += val[u];
}

void solve()
{
    int n;
    cin >> n;

    FORU(i, 1, n + 1)
    {
        ans[i] = 1;
        val[i] = 0;
    }

    FORU(i, 2, n + 1)
    {
        int x;
        cin >> x;
        edge[x].pb(i);
    }

    DFS(1);

    FORU(i, 1, n + 1)
        cout << ans[i] << " ";
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}