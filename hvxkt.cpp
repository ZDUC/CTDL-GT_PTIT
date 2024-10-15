#include <bits/stdc++.h>
using namespace std;
int main(){
	int tuyen;
	cin>>tuyen;
	while(tuyen--){
		string uyen;
		cin>>uyen;
		int kien[uyen.size()+1];
		for(int lan=1; lan<=uyen.size();lan++){
			kien[lan]=lan;
		}
		while(1){
			for(int lan=1;lan<=uyen.size();lan++){
				cout<<uyen[kien[lan]-1];
			}
			cout<<" ";
			int zeros=0;
			for(int lan=uyen.size()-1;lan>=1;lan--){
				if(kien[lan]<kien[lan+1]){
					zeros=1;
					sort(kien+lan+1,kien+uyen.size()+1);
					for(int Duc=lan+1;Duc<=uyen.size();Duc++){
						if(kien[Duc]>kien[lan]){
							swap(kien[Duc],kien[lan]);
							break;
						}
					}
					break;
				}
			}
			if(zeros==0) break;
		}
		cout<<endl;
	}
}