#include <bits/stdc++.h>
using namespace std;
char c;
int n;
string s;
bool check()
{
    int dc = 0, dd = 0, fc = 0, fd = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            dc++;
            dd = 0;
        }
        else
        {
            dc = 0;
            dd++;
        }
        fc = max(fc, dc);
        fd = max(fd, dd);
    }
    if (fc > fd && fc >= 5)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        s = "";
        for (int i = 0; i < n; i++)
            s += 'O';
        while (1)
        {
            int ok = 0;
            if (check())
                cout << s << endl;
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] != 'X')
                {
                    ok = 1;
                    s[i] = 'X';
                    for (int j = i + 1; j < n; j++)
                        s[j] = 'O';
                    break;
                }
            }
            if (!ok)
                break;
        }
        cout << endl;
    }
}