#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,m;
 
int main(){
	cin >> n >> m;
	multiset<int, greater<int>> s;
	int k;
	for(int i=0; i<n; i++){
		cin >> k;
		s.insert(k);		
	}
	vector<int> paid;
	for(int i=0; i<m; i++){
		cin >> k;
		auto ok = s.lower_bound(k);
		if(ok==s.end()){
			paid.push_back(-1);
		}
		else{
			paid.push_back(*ok);
			s.erase(ok);
		}
	}
	for(auto i:paid){
		cout << i << '\n';
	}
}
