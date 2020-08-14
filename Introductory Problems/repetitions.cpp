#include <bits/stdc++.h>
using namespace std;
 
string seq;
int longest, counter = 0;
 
int main(){	
	cin >> seq;
	for(int i=0; i<seq.length(); i++){
		if(seq[i] == seq[i-1]){
			counter++;
		}
		else{
			longest = max(longest, counter);
			counter = 1;
		}
	}
	longest = max(longest, counter);
	cout << longest;
}
