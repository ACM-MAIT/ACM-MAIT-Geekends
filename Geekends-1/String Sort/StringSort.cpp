#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>t;
    while(t--){
        int z;
        cin>>z;
        vector< pair <string,string> > v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(s[i].substr(z),s[i]));
        }
        sort(v.begin(), v.end());

        for(int i=0;i<n;i++){
            cout<<v[i].second<<endl;
        }
        cout<<endl;
    }

    return 0;
}
