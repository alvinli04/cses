#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int, int>
 
int n;
 
int main(){
	cin >> n;
	vector<int> t(n);
	for(int i=0; i<n; i++){
		cin >> t[i];
	}
	sort(t.begin(), t.end());
	ll sum=0;
	for(int i:t){
		sum += i;
	}
	if(*t.rbegin() < sum-*t.rbegin()){
		cout << sum;
	}
	else{
		cout << 2* *t.rbegin();
	}
}
