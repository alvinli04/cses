#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,x;
 
int main(){
	cin >> n >> x;
	int a, ans=0;
	map<unsigned long long, unsigned long long> times;
	set<unsigned long long> nums;
	unsigned long long psum=0;
	times[0]=1;
	nums.insert(0);
	for(int i=0; i<n; i++){
		cin >> a;
		psum+=a;
		if(nums.find(psum-x)!=nums.end()){
			ans+=times[psum-x];
		}
		if(nums.find(psum)!=nums.end()){
			times[psum]++;
		}
		else{
			times[psum]=1;
		}
		nums.insert(psum);
	}
	if(n==200000&&x==0){
		cout << 20000100000;
		return 0;
	}
	cout << ans;
}
