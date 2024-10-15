#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    vector<vector<int>> v1, v2;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
        b[i] = 1;
    }
    while (1)
    {
        v1.push_back(a);
        int ok = 0;
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i + 1])
            {
                ok = 1;
                sort(a.begin() + i + 1, a.end());
                for (int j = i + 1; j <= n; j++)
                {
                    if (a[j] > a[i])
                    {
                        swap(a[i], a[j]);
                        break;
                    }
                }
                break;
            }
        }
        if (ok == 0)
            break;
    }
    while (1)
    {
        v2.push_back(b);
        int ok = 0;
        for (int i = n; i >= 1; i--)
        {
            if (b[i] != n)
            {
                ok = 1;
                b[i]++;
                for (int j = i + 1; j <= n; j++)
                    b[j] = 1;
                break;
            }
        }
        if (ok == 0)
            break;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            for (int k = 1; k <= n; k++)
                cout << (char)(v1[i][k] + 'A' - 1);
            for (int k = 1; k <= n; k++)
                cout << v2[j][k];
            cout << endl;
        }
    }
}