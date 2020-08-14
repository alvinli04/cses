#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){	
	ll n,x,y;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> y >> x;
		ll xy = max(x,y);
		if(xy%2==0){
			if(y>x){
				cout << xy*xy - (x-1) << endl;
			}
			else{
				cout << (xy-1)*(xy-1) + y << endl;
			}
		}
		else{
			if(y>x){
				cout << (xy-1)*(xy-1) + x << endl;
			}
			else{
				cout << xy*xy - (y-1) << endl;
			}
		}
	}
}
