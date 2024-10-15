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
        long long a[10009]={0};
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
        for (int i=0;i<10009;i++){
        	if(a[i]>0) cout<<i<<" ";
		}
        cout << endl;
        for (int i=0;i<10009;i++)
        {
            if(a[i]>1) cout<<i<<" ";
        }
        cout << endl;
    }
}