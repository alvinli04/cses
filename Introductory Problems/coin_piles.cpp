#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
ll mod = 1000000007;
 
int main(){	
	int t;
	ll a,b;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> a >> b;
		if(a==0 && b==0){
			cout << "YES" << endl;
			continue;
		}
		if(abs(a-b) > min(a,b)){
			cout << "NO" << endl;
			continue;
		}
		else{
			ll k = abs(a-b);
			if((min(a,b)-k)%3!=0){
				cout << "NO" << endl;
				continue;
			}
			else{
				cout << "YES" << endl;
				continue;
			}
		}
	}
}
