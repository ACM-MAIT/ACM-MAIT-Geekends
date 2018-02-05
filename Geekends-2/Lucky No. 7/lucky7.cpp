#include <iostream>
using namespace std;
#define ull unsigned long long 

int main(){

	int t;cin>>t;
	while(t--){
		ull n;
		cin>>n;
		int final = n%9;
		if(final==7){
			cout<<"Lucky"<<endl;
		}
		else cout<<"Unlucky"<<endl;
	}

	return 0;
}