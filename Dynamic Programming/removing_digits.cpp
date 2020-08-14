#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
 
int main(){
	cin >> n;
	vector<int> dp(n+1, INT_MAX);
	int counter = n;
	dp[n]=0;
	while(counter >= 0){
		if(dp[counter]==INT_MAX){
			counter--;
			continue;
		}
		for(char c: to_string(counter)){
			if(counter>=(c-'0')){
				dp[counter-(c-'0')]=min(dp[counter]+1, dp[counter-(c-'0')]);
			}
		}
		counter--;
	}
	cout << dp[0];
}
