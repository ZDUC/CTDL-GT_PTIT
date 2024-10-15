#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
		cin>>a;
		int n=a.size();
    	int check=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '1')
            {
            	check=1;
                a[i] = '0';
                for (int j = i + 1; j < n; j++)
                    a[j] = '1';
                break;
            }
        }   
        if(check==0) {
        	for(int i=0;i<a.size();i++){
        		cout<<1;
			}
		}
		else cout<<a;
        cout << endl;  
    }
}