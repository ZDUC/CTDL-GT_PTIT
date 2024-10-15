#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		string a;
		for (int i = 0; i < n; i++)
            a += '0';
        while (1)
        {
        	int dem=0;
        	for (int i = 0; i < n; i++)
        	{
        		if(a[i]=='1') dem++;
			}
            if(dem==k) cout << a << endl;
            int ok = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == '0')
                {
                    ok = 1;
                    a[i] = '1';
                    for (int j = i + 1; j < n; j++)
                        a[j] = '0';
                    break;
                }
            }
            if (ok == 0)
                break;
        }
    }
}