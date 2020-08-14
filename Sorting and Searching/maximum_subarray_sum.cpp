#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int n;
 
ll maxll(ll a, ll b){
	if(a > b){
		return a;
	}
	else{
		return b;
	}
}
 
int main(){
	cin >> n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	ll best=arr[0], sum=0;
	
	for(int i=0; i<n; i++){
		sum = maxll(arr[i],sum+arr[i]);
		best = maxll(best,sum);
	}
	cout << best;
}

