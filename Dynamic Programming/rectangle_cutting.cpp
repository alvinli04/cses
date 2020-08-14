#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;
 
ll mod = 1000000007;
int p,q;
vector<vector<int>> dp(501, vector<int>(501, -1)); //minimum moves at x*y subrectangle
 
int sq(int a, int b){
	if(dp[a][b] != -1){
		return dp[a][b];
	}
	
	int m = INT_MAX;
	for(int i=1; i<= a/2; i++){
		m = min(m, 1 + sq(i, b) + sq(a-i, b));
	}
	for(int i=1; i <= b/2; i++){
		m = min(m, 1 + sq(a, i) + sq(a, b-i));
	}
	dp[a][b] = m;
	
	return m;
}
 
int main(){	
	cin >> p >> q;
	int mi = min(p, q);
	for(int i=1; i<=mi; i++){
		dp[i][i] = 0;
	}
	cout << sq(p, q) << endl;
}
