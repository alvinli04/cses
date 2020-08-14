#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, p;
	cin >> n;
	multiset<long long> ends;
	map<long long, vector<long long>> end_start, end_price;
	for(int i=0; i<n; i++){
		cin >> a >> b >> p;
		end_start[b].push_back(a);
		end_price[b].push_back(p);
		ends.insert(b);
	}
	
	long long dp[n] = {};
	map<long long, int> mp;
	int cnt = 0;
	for(auto i=ends.begin(); i!=ends.end(); i++){
		long long mx = -1;
		for(int j = 0; j < (int)end_start[*i].size(); j++){
			auto itr = ends.lower_bound(end_start[*i][j]);
			if(itr == ends.begin()){
				mx = max(mx, end_price[*i][j]);
			}
			else{
				--itr;
				mx = max(mx, end_price[*i][j] + dp[mp[*itr]]);
			}
		}
		if(cnt == 0) dp[0] = mx;
		else dp[cnt] = max(mx, dp[cnt-1]);
		mp[*i] = cnt;
		cnt++;
	}
	cout << dp[n-1];
}
