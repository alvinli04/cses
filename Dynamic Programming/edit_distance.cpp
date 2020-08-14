#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;
 
const int mod = 1e9+7;
string n,m;
 
int dist(string a, string b){
	int dp[a.size() + 1][b.size() + 1];
	
	for(int i=0; i<=a.size(); i++){
		for(int j=0; j<=b.size(); j++){
			if(i==0){
				dp[i][j] = j;
			}
			else if(j==0){
				dp[i][j] = i;
			}
			else if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
			}
		}
	}
	return dp[a.size()][b.size()];
}
 
int main(){
	cin >> n >> m;
	cout << dist(n,m);
}
