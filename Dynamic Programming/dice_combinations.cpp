#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
ll mod=1e9+7;
ll dp[1000001];
 
int main(){
	cin >> n;
	dp[0]=1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<7; j++){
			if(i-j>-1){
				dp[i]+=dp[i-j];
				dp[i]%=mod;
			}
		}
	}
	cout << dp[n];
}
