#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,a,b;

int main(){
	cin >> n >> a >> b;
	ll psum = 0, m = LONG_MIN, arr[n+1], cnt=0, k;
	arr[0] = 0;
	for(int i=1; i<=n; i++){
		cin >> k;
		psum+=k;
		arr[i] = psum;
	}
	multiset<ll> window;
	for(int i=1; i<=n; i++){
		if(i >= a){
			window.insert(arr[i-a]);
		}
		if(i >= b+1){
			window.erase(window.find(arr[cnt]));
			cnt++;
		}
		if((int)window.size() > 0){
			m = max(arr[i] - *window.begin(), m);
		}
	}
	m = max(arr[n] - *window.begin(), m);
	cout << m;
}

//keep track of lowest prefix sum from i-a to i-b, runs O(n)
