#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int n;
 
int main(){
	cin >> n;
	int songs[n];
	set<int> check;
	for(int i=0; i<n; i++){
		cin >> songs[i];
	}
	
	int begin=0, longest=0;
	for(int i=0; i<n; i++){
		while(check.find(songs[i])!=check.end()){
			longest=max(longest, (int)check.size());
			//cout<<longest<<endl;
			check.erase(check.find(songs[begin]));
			begin++;
		}
		check.insert(songs[i]);
		if(i==n-1){
			longest=max(longest, (int)check.size());
		}
	}
	
	cout << longest;
}
