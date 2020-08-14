#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
 
int n;
 
int main(){
	cin >> n;
	vector<int> sticks(n);
	for(int i=0; i<n; i++){
		cin >> sticks[i];
	}
	sort(sticks.begin(), sticks.end());
	ll sum = 0;
	for(auto i: sticks){
		sum += abs(i-sticks[n/2]);
	}
	cout << sum;
}
