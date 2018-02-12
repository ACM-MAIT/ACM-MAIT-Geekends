#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char d;
		string s;
		cin>>d>>s;
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i] == d){
				cnt+=(i+1);
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}