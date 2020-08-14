#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
 
int n,k;
vector<int> arr;
 
bool works(ll a){
	ll s = 0, cnt = 0;
	for(int i: arr){
		if(i > a) return false;
		if(s + i > a){
			cnt++;
			s = i;
		}
		else{
			s += i;
		}
	}
	if(s) cnt++;
	return cnt <= k;
}
 
int main(){
	cin >> n >> k;
	ll s = 0;
	int a = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		s += a;
		arr.push_back(a);
	}
	
	ll lo = 1, hi = s, ans = 0;
	while(lo <= hi){
		ll mid = (lo+hi)/2;
		if(works(mid)){
			hi = mid - 1;
			ans = mid;
		}
		else{
			lo = mid + 1;
		}
	}
	//cout << works(21);
	cout << ans;
}
