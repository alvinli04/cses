#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,x;
 
int main(){
	cin >> n >> x;
	ll arr[x+1];
	arr[0]=0;
	int coins[n];
	for(int i=0; i<n; i++){
		cin >> coins[i];
	}
	
	for(int i=1; i<=x; i++){
		arr[i]=INT_MAX;
		for(int c:coins){
			if(i-c>-1){
				arr[i]=min(arr[i], arr[i-c]+1);
			}
		}
	}
	if(arr[x]==INT_MAX){
		cout << -1;
		return 0;
	}
	cout << arr[x];
}
