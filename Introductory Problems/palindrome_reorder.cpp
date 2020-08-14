#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int n;
ll mod = 1000000007;
 
int main(){	
	string k;
	cin >> k;
	sort(k.begin(), k.end());
	int running = 0;
	bool odd = false;
	string ans = "";
	ll oddnum = 0;
	char oddchar = '0';
	for(int i=0; i<k.size(); i++){
		running++;
		if((i!=k.size()-1 && k[i+1]!=k[i]) || i == k.size()-1){
			//cout << running << endl;
			if(running%2==0){
				for(int j=0; j<running/2; j++)
					ans.push_back(k[i]);
			}
			else{
				if(odd){
					cout << "NO SOLUTION";
					return 0;
				}
				else{
					odd = true;
					oddchar = k[i];
					oddnum = running;
				}
			}
			running = 0;
		}
	}
	string rans = ans;
	reverse(rans.begin(), rans.end());
	//cout << ans << endl;
	//cout << rans << endl;
	if(oddnum == 0){
		for(char i : rans){
			ans.push_back(i);
		}
		cout << ans;
		return 0;
	}
	else{
		for(int i=0; i<oddnum; i++){
			ans.push_back(oddchar);
		}
		for(char i : rans){
			ans.push_back(i);
		}
		cout << ans;
		return 0;
	}
}
