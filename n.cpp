#include <bits/stdc++.h>
using namespace std;
int check;
void Try(int limit, int remain, vector<int> a) {
    if (remain == 0) {
    	if(check==0){
    		cout<<a.size()<<endl;
    		check=1;
		}
        cout << "(";
        for (int i = 0; i < a.size() - 1; ++i) {
            cout << a[i] << " ";
        }
        cout << a.back() << ") ";
    }
    for (int i = limit; i >= 1; --i) {
        if (remain >= i) {
            a.push_back(i);
            Try(i, remain - i, a);
            a.pop_back();
        }
    }
}

void testCase() {
    int n; cin >> n;
    Try(n, n, {});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
    	check=0;
        testCase();
        cout << "\n";
    }
    return 0;
}