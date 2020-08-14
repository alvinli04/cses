#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
ll n,t;
 
bool works(ll time, unsigned long long goal, vector<ll> rates){
	unsigned long long prods = 0;
	for(ll i:rates){
		prods += time/i;
	}
	return prods>=goal;
}
 
int main(){
	cin >> n >> t;
	vector<ll> rates;
	
	int k;
	while(n--){
		cin >> k;
		rates.push_back(k);
	}
	unsigned long long lo=1,res=0;
	unsigned long long hi=1e18;
	while(lo<=hi){
		ll mid=(lo+hi)/2;
		if(works(mid, t, rates)){
			res=mid;
			hi=mid-1;
		}
		else{
			lo=mid+1;
		}
	}
	cout << res;
}
