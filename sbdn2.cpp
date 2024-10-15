#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long s; cin >> s;
    int res = 0;
    queue<string> q;
    q.push("1");
    while (!q.empty()) {
        string z = q.front();
        q.pop();
        string x = z + "0";
        if (stoll(x)%s==0){
        	cout<<x<<endl;
        	break;
		}
        q.push(x);
        x = z + "1";
        if (stoll(x)%s==0){
        	res=1;
        	cout<<x<<endl;
        	break;
		}
        q.push(x);
    }
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
    }
    return 0;
}