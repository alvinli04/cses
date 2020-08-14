#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int n;
ll mod = 1000000007;
vector<vector<ll>> subsets;
vector<ll> subset;
 
void search(int k, vector<ll> elements) {	
	if (k == elements.size()) {
		//process
		subsets.push_back(subset);
	} 
	else {
		subset.push_back(elements[k]);
		search(k+1, elements);
		subset.pop_back();
		search(k+1, elements);
	}
 
}
 
ll sum(vector<ll> v){
	ll sum = 0;
	for(auto i: v){
		sum += i;
	}
	return sum;
}
 
int main(){	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	ll p;
	vector<ll> apples;
	
	for(int i=0; i<n; i++){
		cin >> p;
		apples.push_back(p);	
	}
	
	search(0, apples);
	ll sum_all = sum(apples);
	
	ll diff = INT_MAX;
	for(auto i: subsets){
		diff = min(diff, abs(2*sum(i) - sum_all));
	}
	
	/*
	for(auto i: subsets){
		for(auto j: i){
			cout << j << " ";
		}
		cout << '\n';
	}
	*/
	
	cout << diff;
}
