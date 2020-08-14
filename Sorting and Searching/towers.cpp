#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
 
int main(){
	cin >> n;
	vector<int> v;
	int k;
	while(n--){
		cin >> k;
		auto p = upper_bound(v.begin(), v.end(), k);
		if(p==v.end()){
			v.push_back(k);
		}
		else{
			*p = k;
		}
	}
	cout << v.size();
}
