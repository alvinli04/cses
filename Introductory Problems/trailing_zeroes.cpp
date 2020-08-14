#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
ll mod = 1000000007;
 
int main(){	
	ll n, ans(0);
	cin >> n;
	for(ll i=5; i<=n; i*=5){
		ans += floor(n/i);
		//cout << floor(n/i) << endl;
	}
	cout << ans;
}
