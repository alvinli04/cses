#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
 
int main(){
	cin >> n;
	int presum=0;
	map<int, ll> divis;
	divis[0]=1;
	int k;
	for(int i=1; i<=n; i++){
		cin >> k;
		presum+=k;
		presum%=n;
		if(presum<0){
			presum=n-abs(presum);
		}
		if(divis.find(presum)==divis.end()){
			divis[presum]=1;
		}
		else{
			divis[presum]++;
		}
	}
	ll ans=0;
	for(auto i:divis){
		ll s = i.second;
		ans+=s*(s-1)/2;
	}
	
	cout << ans;
}
