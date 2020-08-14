#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,x;
 
int main(){
	cin >> x >> n;
	set<int> lights={0,x};
	multiset<int> lengths={x};
	int light;
	while(n--){
		cin >> light;
		auto hi = lights.upper_bound(light);
		auto lo = prev(hi);
		lengths.erase(lengths.find(*hi-*lo));
		lengths.insert(*hi-light);
		lengths.insert(light-*lo);
		lights.insert(light);
		cout << *lengths.rbegin() << ' ';
	}
}
