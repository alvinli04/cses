#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;
 
const int mod = 1e9+7;
int n,m;
 
int main(){
	cin >> n >> m;
	vector<vector<ll>> dp(n, vector<ll>(m+1, 0));
	
	ll k;
	cin >> k;
	
	if(k==0){
		for(int i=1; i<=m; i++){
			dp[0][i] = 1;
		}
	}
	else{
		dp[0][k]=1;
	}
	
	for(int i=1; i<n; i++){
		cin >> k;
		if(k==0){
			for(int j=1; j<=m; j++){
				dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % mod;
				if(j < m){
					(dp[i][j] += dp[i-1][j+1]) %= mod;
				}
			}
		}
		else{
			
			ll foo = dp[i-1][k];
			if(k > 0){
				(foo += dp[i-1][k-1]) %= mod;
			}
			if(k < m){
				(foo += dp[i-1][k+1]) %= mod;
			}
			dp[i][k] = foo;
			
		}
	}
	
	int ans=0;
	for(int i: dp[n-1]){
		(ans += i) %= mod;
	}
	
	cout << ans;
}
