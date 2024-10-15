#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z,k=0;
        cin >> z;
        cout<<z<<" ";
        string s;
        cin>>s;
        long long n=s.size();
        long long a[n+1];
        for(long long i=1;i<=n;i++){
            a[i]=s[i-1]-'0';
        }
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i + 1])
            {
                k = 1;
                sort(a + i + 1, a + n + 1);
                for(int j=i+1;j<=n;j++){
					if(a[j]>a[i]){
						swap(a[i],a[j]);
						break;
					}
				}
				break;
            }
        }
        if (k == 0)
        {
            cout<<"BIGGEST"<<endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << endl;
    }
}