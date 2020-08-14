#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,x;
 
int main(){
	cin >> n >> x;
	int a;
	vector<int> pt(n+1);
	pt[0]=0;
	int psum=0;
	for(int i=1; i<=n; i++){
		cin >> a;
		psum+=a;
		pt[i]=psum;
	}
	int ans = 0;
	auto lo=pt.begin();
	for(auto hi=pt.begin()+1; hi!=pt.end(); hi++){
		while(*hi-*lo > x){
			lo++;
		}
		if(*hi-*lo == x){
			ans++;
		}
	}	
	cout << ans;
}
