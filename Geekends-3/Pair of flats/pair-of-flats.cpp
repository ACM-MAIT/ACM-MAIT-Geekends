#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	if(n < 2){
	 	cout<<0; 
	 	return 0;
	}
	vector <int> v1;
	vo.push_back(v[0]);
	for(int i = 1;i<n;i++)
	{
		if(v[i-1] != v[i])
			vo.push_back(v[i]);
	}
	v = vo;

	vector< pair<int,int> > ans;
	for(int i=0;i<vo.size();i++)
	{
		for(int j=i;j<vo.size();j++)
		{
			if(abs(vo[i]-vo[j]) == k)
				ans.push_back(make_pair(v[i],v[j]));
		}
	}

	cout<<ans.size()<<endl;
	for(int i = 0;i<ans.size();i++)
	{
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}
}
