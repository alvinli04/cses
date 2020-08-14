#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int n;
 
int main(){
	cin >> n;
	
	map<int, bool> io; //true is enter, false is exit
	vector<ll> times;
	ll time;
	
	for(int i=0; i<2*n; i++){
		cin >> time;
		times.push_back(time);
		if(i%2==0){
			io[time] = true;
		}
		else{
			io[time] = false;
		}
	}
	
	sort(times.begin(), times.end());
	int customers = 0;
	int maxc = 0;
	
	for(ll i : times){
		if(io[i]){
			customers++;
			maxc = max(maxc, customers);
		}
		else{
			customers--;
		}
	}
	
	cout << maxc;
}
