#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
ll mod = 1000000007;
 
int main(){	
	string s;
	cin >> s;
	vector<string> strs;
	sort(s.begin(), s.end());
	do{
		strs.push_back(s);
	}while(next_permutation(s.begin(), s.end()));
	
	cout << strs.size() << endl;
	for(string s:strs){
		cout << s << endl;
	}
}
