#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;

const ll mod = 1e9 + 7;
int n; 

int main(){	
	cin >> n;
	ll sum = 0, dp[n][n] = {}, arr[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	for(int l = n-1; l > -1; l--){
		for(int r = l; r < n; r++){
			if(r == l) dp[l][r] = arr[l];
			else{
				dp[l][r] = max(arr[l] - dp[l+1][r], arr[r] - dp[l][r-1]);
			}
		}
	}
	
	cout << (sum + dp[0][n-1])/2;
}
