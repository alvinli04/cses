#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,x;
 
struct cmp{
	bool operator()(pii a, pii b){
		return a.first < b.first;
	}
};
 
int main(){
	cin >> n >> x;
	vector<int> arr;
	map<int, set<pii>> dict; //value, {pos, pos}
	int k;
	for(int i=0; i<n; i++){
		cin >> k;
		arr.push_back(k);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			dict[arr[i]+arr[j]].insert(make_pair(i,j));
		}
	}
	for(auto i:dict){
		if(dict.find(x-i.first)!=dict.end()){
			for(auto j:dict[x-i.first]){
				for(auto k:dict[i.first]){
					if(j.first!=k.first&&j.first!=k.second&&j.second!=k.first&&j.second!=k.second){
						cout << j.first+1 << ' ' << j.second+1 << ' ' << k.first+1 << ' ' << k.second+1;
						return 0;	
					}
				}
			}
		}
	}
	cout << "IMPOSSIBLE";
}
