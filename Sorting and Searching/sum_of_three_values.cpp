#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
 
int n,x;
 
bool cmp(pii a, pii b){
	return a.first < b.first;
}
 
int main(){
	cin >> n >> x;
	vector<pii> vals; //value, index
	int k;
	for(int i=0; i<n; i++){
		cin >> k;
		vals.push_back(make_pair(k, i));
	}
	sort(vals.begin(), vals.end(), cmp);
	for(int i=1; i<n-1; i++){
		int a=0, b=n-1;
		while(a<i&&b>i){
			if(vals[a].first + vals[b].first + vals[i].first == x){
				//cout << vals[a].first + vals[b].first + vals[i].first << endl;
				cout << vals[a].second+1 << ' ' <<  vals[i].second+1 << ' ' << vals[b].second+1;
				return 0;
			}
			if(vals[a].first + vals[b].first + vals[i].first > x){
				b--;
			}
			else{
				a++;
			}
			
		}
	}
	cout << "IMPOSSIBLE";
}
