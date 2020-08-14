#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

ll mod = 1e9+7;
int n;

int main(){
	cin >> n;
	vector<int> dp;
	int k;
	for(int i=0; i<n; i++){
		cin >> k;
		auto itr = lower_bound(dp.begin(), dp.end(), k);
		if(itr == dp.end()){
			dp.push_back(k);
		}
		else{
			*itr = k;
		}
	}
	cout << dp.size();
}

