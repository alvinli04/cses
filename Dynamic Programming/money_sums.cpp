#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;
 
ll mod = 1000000007;
int n;
 
int main(){	
	cin >> n;
	vector<int> arr(n);
	ll sum = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
 
	bool dp[sum+1];
	fill(dp, dp+sum+1, false);
	
	dp[0] = 1;
	
	for(int i=0; i<n; i++){
		for(int j = sum; j >= 0; j--){
			if(dp[j]){
				dp[j+arr[i]] = true;
			}
		}
	}
	int cnt = 0;
	for(int i=1; i<sum+1; i++){
		if(dp[i]) cnt++;
	}
	cout << cnt << endl;
	for(int i=1; i<sum+1; i++){
		if(dp[i]) cout << i << ' ';
	}
}
