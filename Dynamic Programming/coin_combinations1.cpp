#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,x;
	int mod=1e9+7;
	cin >> n >> x;
	vector<int> arr(x+1,0);
	vector<int> coins(n);
	
	for(int&i : coins){
		cin >> i;
	}
	arr[0]=1;
	
	for(int i=1; i<=x; i++){
		for(int j=0; j<n; j++){
			if(i-coins[j]>-1){
				(arr[i]+=arr[i-coins[j]])%=mod;
			}
		}
	}
	cout << arr[x];
}
