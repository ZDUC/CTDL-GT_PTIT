#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int l=abs(a[i]-k);
            st.insert(l);
        }
        for(auto i: st){
            cout<<i<<" ";
        }
        cout << endl;
    }
}