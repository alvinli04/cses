#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n,k;
ll ssum=0, bsum=0;
 
void balance(multiset<int> &small, multiset<int> &big)
{
    while (true)
    {
        int ssmall = small.size();
        int sbig = big.size();
 
        if (ssmall == sbig || ssmall + 1 == sbig) break; // OK
 
        if (ssmall < sbig)
        {
            // big to small
            auto v = big.begin();
            small.emplace(*v);
            big.erase(v);
            ssum+=*v;
            bsum-=*v;
        }
        else 
        {
            // small to big
            auto v = small.end();
            --v;
            big.emplace(*v);
            small.erase(v);
            ssum-=*v;
            bsum+=*v;
        }
    }
}
 
int main(){
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	multiset<int> small, big;
	for(int i=0; i<k; i++){
		big.emplace(arr[i]);
		bsum+=arr[i];
	}
	balance(small, big);
	int del=0, add=k;
	cout << *big.begin()*small.size()-ssum + bsum-*big.begin()*big.size() << ' ';
	int x;
	for(int i=1; i<n-k+1; i++){
		//delete
		if(arr[del]>=*big.begin()){
			big.erase(big.find(arr[del]));
			bsum-=arr[del];
		}
		else{
			small.erase(small.find(arr[del]));
			ssum-=arr[del];
		}
		del++;
		//add new
		int x=arr[add];
		auto v=big.begin();
		if (v != big.end() && x > *v){
			big.emplace(x);
    		bsum+=x;
		}
		else{
			small.emplace(x);
			ssum+=x;
		}
		balance(small, big);
		cout << *big.begin()*small.size()-ssum + bsum-*big.begin()*big.size() << ' ';
		
		add++;
	}
}

