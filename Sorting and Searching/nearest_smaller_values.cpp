#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
 
int main(){
	cin >> n;
	stack<pii> check;
	int k;
	cin >> k;
	check.push(make_pair(k, 1));
	cout << 0 << ' ';
	for(int i=1; i<n; i++){
		cin >> k;
		while(check.size()>0&&check.top().first>=k){
			check.pop();	
		}
		if(check.size()==0){
			cout << 0 << ' ';
		}
		else{
			cout << check.top().second << ' ';
		}
		check.push(make_pair(k, i+1));
	}
}
