#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
ll mod=1e9+7;
 
bool cmp(pii a, pii b){
	return a.first < b.first;
}
 
int main(){
	cin >> n;
	int a,d;
	vector<pii> arr(n);
	for(int i=0; i<n; i++){
		cin >> a >> d;
		arr.push_back(make_pair(a,d));
	}
	
	sort(arr.begin(), arr.end(), cmp);
	
	ll time=0, reward=0;
	for(auto i:arr){
		time+=i.first;
		reward+=i.second-time;
	}
	
	cout << reward;
}
