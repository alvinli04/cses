#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int n, x, y;
 
int main(){
	cin >> n;
	
	vector<pair<int, int>> v;
	
	for(int i=0; i<n; i++){
		cin >> x >> y;
		v.push_back(make_pair(y,x));
	}
	
	sort(v.begin(), v.end());
	
	int movies = 0;
	int end = 0;
	
	for(auto i: v){
		if(i.second >= end){
			end = i.first;
			movies++;
		}
	}
	
	cout << movies;
}
