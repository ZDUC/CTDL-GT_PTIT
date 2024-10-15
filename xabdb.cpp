#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    string a;
    for (int i = 0; i < n; i++)
        a += 'A';
    vector<string> v;
    int dem=0;
    while (1)
    {
        int dlt1=0,dlt2=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='A') dlt1++;
			else dlt1=0;
			if(dlt1==k&&a[i+1]!='A'){
				dlt2++;
				dlt1=0;
			}
		}
		if(dlt2==1){
			dem++;
			v.push_back(a);
		}
        int ok = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'A')
            {
                ok = 1;
                a[i] = 'B';
                for (int j = i + 1; j < n; j++)
                    a[j] = 'A';
                break;
            }
        }
        if (ok == 0)
            break;
    }
    cout<<dem<<endl;
    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<endl;
	}
}