#include <bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '['){
                st.push(s[i]);
                }
                else if(s[i] == ')' || s[i] == ']'){
                    if(!st.empty()){
                        char c = st.top();
                        if((c == '(' && s[i] == ')') || (c == '[' && s[i] == ']'))
                            st.pop();
                        else break;
                    }
                }

        }
        if(st.size() == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}