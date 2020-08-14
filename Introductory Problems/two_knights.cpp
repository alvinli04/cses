#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){	
	int n;
	ll nines = 0;
	cin >> n;
	for(int i=1; i<=n; i++){
		ll ii = i*i;
		ll total = ii*(ii-1)/2;
		if(i > 2){
			nines = (i-2)*(i-1)/2;
		}
		cout << total - 8*nines << endl;
	}
}
