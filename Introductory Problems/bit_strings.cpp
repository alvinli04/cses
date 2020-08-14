#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
ll mod = 1000000007;
 
int main(){	
	int n;
	cin >> n;
	ll answer = 1;
	for(int i=0; i<n; i++){
		answer *=2;
		if(answer > mod){
			answer -= mod;
		}
	}
	cout << answer;
}
