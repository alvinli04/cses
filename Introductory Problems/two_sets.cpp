#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){	
	int n;
	cin >> n;
	
	if(n%4==1 || n%4==2){
		cout << "NO";
		return 0;
	}
	
	set<int> set1;
	set<int> set2;
	if(n%4==0){
		for(int i=n; i>0; i-=4){
			set1.insert(i);
			set1.insert(i-3);
			set2.insert(i-1);
			set2.insert(i-2);
		}
	}
	if(n%4==3){
		for(int i=n; i>4; i-=4){
			set1.insert(i);
			set1.insert(i-3);
			set2.insert(i-1);
			set2.insert(i-2);
		}
		set1.insert(3);
		set2.insert(1);
		set2.insert(2);
	}
	cout<<"YES"<<endl;
	cout<<set1.size()<<endl;
	for(auto i : set1){
		cout << i << " ";
	}
	cout << endl;
	
	cout<<set2.size()<<endl;
	for(auto i: set2){
		cout << i << " ";
	}
}
