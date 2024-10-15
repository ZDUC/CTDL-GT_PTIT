#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
struct data
{
    int x, y, s;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        int check[n][n] = {};
        char a[n][n];
        struct data u, v, ed;
        queue<struct data> q;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        cin >> u.x >> u.y >> ed.x >> ed.y;
        check[u.x][u.y] = 1;
        u.s = 0;
        q.push(u);
        while (q.size())
        {
            u = q.front();
            q.pop();
            if (u.x == ed.x && u.y == ed.y)
            {
                cout << u.s << endl;
                break;
            }
            v.s = u.s + 1;
            v.y = u.y;
            for (int i = u.x + 1; i < n; i++)
            {
                if (a[i][u.y] == 'X' || check[i][u.y])
                    break;
                v.x = i;
                check[i][u.y] = 1;
                q.push(v);
            }
            for (int i = u.x - 1; i >= 0; i--)
            {
                if (a[i][u.y] == 'X' || check[i][u.y])
                    break;
                v.x = i;
                check[i][u.y] = 1;
                q.push(v);
            }
            v.x = u.x;
            for (int i = u.y + 1; i < n; i++)
            {
                if (a[u.x][i] == 'X' || check[u.x][i])
                    break;
                v.y = i;
                check[u.x][i] = 1;
                q.push(v);
            }
            for (int i = u.y - 1; i >= 0; i--)
            {
                if (a[u.x][i] == 'X' || check[u.x][i])
                    break;
                v.y = i;
                check[u.x][i] = 1;
                q.push(v);
            }
        }
    }
}