#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n;
        int s[n+1];
        for(int i=1;i<=n;i++){
        	cin>>m;
        	s[i]=m;
		}
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            a[i] = i;
        int dem=1;
        while (1)
        {
        	int check=0;
            for (int i = 1; i <= n; i++)
                if(a[i]!=s[i]) check=1;
            if(check==0){
            	cout<<dem<<endl;
            	break;
			}
			dem=dem+1;
            int ok = 0;
            for (int i = n - 1; i >= 1; i--)
            {
                if (a[i] < a[i + 1])
                {
                    ok = 1;
                    sort(a + i + 1, a + n + 1);
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
        cout << endl;
    }
}