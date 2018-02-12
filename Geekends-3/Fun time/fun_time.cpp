#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long MaxTime(vector<long>& v){
    if(v.size()<=1) return 0;
    int n = v.size();
    vector <long long> a(n,0);
    vector <long long> b(n,0);
    vector <long long> c(n,0);
    a[0]=0;
    b[0]=-v[0];
    c[0]=0;
    for(int i=1;i<n;i++){
        a[i] = max(a[i-1],c[i-1]);
        b[i] = max(b[i-1],a[i-1]-v[i]);
        c[i] = b[i-1]+v[i];
    }
    return max(a[n-1],c[n-1]);
}


int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long> v;
		for(int i=0;i<n;i++){
		    int val;
		    cin>>val;
			v.push_back(val);
		}
	    cout<<MaxTime(v)%mod<<endl;
    }
   
	return 0;
}