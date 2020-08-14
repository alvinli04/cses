#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,x;
 
int main(){
	cin >> n >> x;
	int prices[n][2];
	int a,b;
	for(int i=0; i<n; ++i){
		cin >> prices[i][0];
	}
	for(int i=0; i<n; ++i){
		cin >> prices[i][1];
	}
	//prices[index][price, pages]
	
	vector<vector<int>> dp(n+1, vector<int>(x+1,0));
	for(int i=1; i<=n; i++){
		for(int j=0; j<=x; j++){
			dp[i][j]=dp[i-1][j];
			if(j >= prices[i-1][0]){
				dp[i][j]=max(dp[i][j], prices[i-1][1] + dp[i-1][j-prices[i-1][0]]);
			}
		}
	}
	
	cout << dp[n][x];
}
