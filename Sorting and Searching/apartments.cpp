#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll n,m,k;
 
int main(){
	cin >> n >> m >> k;
	
	vector<ll> wants(n);
	vector<ll> apts(m);
	for(int i=0; i<n; i++){
		cin >> wants[i];
	}
	for(int i=0; i<m; i++){
		cin >> apts[i];
	}
	
	sort(wants.begin(), wants.end());
	sort(apts.begin(), apts.end());
	
	ll people = 0;
	
	stack<ll> apt;
	for(int i=m-1; i>-1; i--){
		apt.push(apts[i]);
	}
	
	for(auto i: wants){
		while(i > apt.top() + k){
			apt.pop();
			if(apt.size() == 0){
				cout << people;
				return 0;
			}
		}
		if(i < apt.top()-k){
			continue;
		}
		else{
			people++;
			apt.pop();
			if(apt.size() == 0){
				cout << people;
				return 0;
			}
		}
	}
	
	cout << people;
}
