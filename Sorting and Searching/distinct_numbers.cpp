#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int n;
 
int main(){
	cin >> n;
	set<ll> nums;
	ll k;
	for(int i=0; i<n; i++){
		cin >> k;
		nums.insert(k); 
	}
	
	cout << nums.size();
}
