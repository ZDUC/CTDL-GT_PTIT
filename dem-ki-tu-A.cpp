#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n==0) 
		{
			cout<<1<<endl;
		}
        else if(n == 1)
        {
            cout << 0 << endl;
        }
		else
        {
            string f0 = "A", f1 = "B", fn;
            for (int i = 2; i <= n; i++)
            {
                fn = f1 + f0;
                f0 = f1;
                f1 = fn;
            }
            int cnt = 0;
            for(int i = 0;i < k; i++)
            {
                if (fn[i] == 'B') cnt++;
            }
            cout << k-cnt << endl;
        }
	}
}