#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int n,k;

int main(){
	cin >> n >> k;
	vector<pii> times(n);
	for(int i=0; i<n; i++){
		cin >> times[i].second >> times[i].first;
	}
	sort(times.begin(), times.end());
	//for(auto i:times) cout << i.second << ' '; cout << endl;
	int ans=0;
	multiset<int> ends;
	for(auto i:times){
		if(k > 0){
			k--;
			ans++;
			ends.insert(i.first);
		}
		else if(i.second > *ends.begin()){
			//in some way involve start time
			ends.insert(i.first);
			ans++;
		}
		for(int i:ends) cout << i << ' '; cout << endl;
	}
	cout << ans;
}
