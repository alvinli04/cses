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
	vector<pii> vals;
	int p;
	for(int i=0; i<n; i++){
		cin >> p;
		vals.push_back(make_pair(p,i));
	}
	
	sort(vals.begin(), vals.end(), cmp);
	
	int i=0;
	int j=n-1;
	
	while(i<j){
		if(vals[i].first+vals[j].first==x){
			cout << vals[i].second+1 << " " << vals[j].second+1;
			return 0;
		}
		else if(vals[i].first + vals[j].first < x){
			i++;
		}
		else{
			j--;
		}
	}
	cout << "IMPOSSIBLE";
}
