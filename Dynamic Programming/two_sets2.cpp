#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
 
ll mod = 1e9+7;
int n;
 
int main(){
	cin >> n;
	
	if((n*(n+1)/2) % 2){
		cout << 0;
		return 0;
	}
	int sum = n*(n+1)/2;
	vector<ll> dp(sum);
	dp[0] = 1;
	for(int i=1; i<=n; i++){
		for(int j=sum/2; j>=0; j--){
			dp[j + i] += dp[j];
			if(dp[j+i] > 2*mod){
				dp[j+i] %= mod;
			}
		}
	}
	
	cout << dp[sum/2]/2;
	
	
}
