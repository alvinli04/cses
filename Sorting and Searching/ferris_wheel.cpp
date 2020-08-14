#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
	int n,x;
	cin >> n >> x;
	
	vector<int> weights(n);
	
	for(int i=0; i<n; i++){
		cin >> weights[i];
	}
	
	sort(weights.begin(), weights.end());
	ll count = 0;
	ll i = 0;
	ll j = n-1;
	while(i<=j){
		if(weights[i]+weights[j]<=x){
			count++;
			i++;
			j--;
		}
		else{
			j--;
			count++;
		}
	}
	
	cout << count;
}
