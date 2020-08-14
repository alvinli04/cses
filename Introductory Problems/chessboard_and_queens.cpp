#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
const ll mod = 1000000007;
const int n = 8;
int co = 0;
bool col[8], diag1[64], diag2[64];
set<pair<int, int>> reserved;
 
void search(int y) {	
	if (y == n) {
		co++;
		return;
	}
	for (int x = 0; x < n; x++) {
		if (col[x] || diag1[x+y] || diag2[x-y+n-1]){
			continue;
		}
		if(reserved.find(make_pair(x,y)) != reserved.end()) continue;
		col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
		search(y+1);
		col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
	}
}
 
int main(){	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char c;
	
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin >> c;
			if(c == '*'){
				reserved.insert(make_pair(i,j));
			}
		}
	}
	
	search(0);
	
	cout << co;
}
