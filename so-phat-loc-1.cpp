#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,dem=0;
        cin >> n;
        vector<string> v;
        string a;
        for (int i = 0; i < n; i++)
            a += '6';
        while (1)
        {
            v.push_back(a);
            dem++;
            int ok = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == '6')
                {
                    ok = 1;
                    a[i] = '8';
                    for (int j = i + 1; j < n; j++)
                        a[j] = '6';
                    break;
                }
            }
            if (ok == 0)
                break;
        }
        cout<<dem<<endl;
        for(auto o:v) cout<<o<<" ";
        cout << endl;
    }
}