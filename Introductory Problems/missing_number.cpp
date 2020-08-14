#include <bits/stdc++.h>
using namespace std;
 
int n,j;
set<int> s,s2;
 
int main(){	
	cin >> n;
	for(int i=1; i<=n; i++){
		s.insert(i);
	}
	for(int i=0; i<n-1; i++){
		cin >> j;
		s2.insert(j);
	}
	for(auto i : s){
		if(s2.find(i)==s2.end()){
			cout << i;
		}
	}
}
