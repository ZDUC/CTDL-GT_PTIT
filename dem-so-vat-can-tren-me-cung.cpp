#include <bits/stdc++.h>
using namespace std;
int n, m, s = 0;
char a[1000][1000];
int rx[] = {1, -1, 0, 0};
int ry[] = {0, 0, 1, -1};
void dfs(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int dx = x + rx[i];
        int dy = y + ry[i];
        if (dx >= 1 && dx <= n && dy >= 1 && dy <= m && a[dx][dy] == '#')
        {
            a[dx][dy] = '.';
            dfs(dx, dy);
        }
    }
}
int main()
{
    cin >> n >> m;
    cin.ignore();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '#')
            {
                a[i][j] = '.';
                s++;
                dfs(i, j);
                cout << endl;
            }
        }
    }
    cout << s;
}