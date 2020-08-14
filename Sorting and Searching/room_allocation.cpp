#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define pii pair<int, int>
 
int n;
 
bool cmp(tuple<int, int, int> a, tuple<int, int, int> b){
	if(get<0>(a) == get<0>(b)){
		return get<1>(a) > get<1>(b);
	}
	return get<0>(a) < get<0>(b);
}
 
int main(){
	cin >> n;
	int earliest_empty=1;
	vector<tuple<int, int, int>> vals(n);//time, io, index
	int a,b;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		vals.push_back(make_tuple(a,1,i));
		vals.push_back(make_tuple(b,-1,i));
	}
	sort(vals.begin(), vals.end(), cmp);
	/*
	for(auto i=vals.begin(); i!=vals.end(); i++){
		cout << get<0>(*i) << get<1>(*i) << get<2>(*i) << ' ';
	}
	*/
	//cout << endl;
	set<int> available;
	map<int, int> rooms;
	set<int> max;
	for(int i=n; i>0; i--){
		available.insert(i);
	}
	for(auto i:vals){
		if(get<1>(i)==1){
			rooms[get<2>(i)]=*available.begin();
			max.insert(*available.begin());
			available.erase(available.begin());
		}
		if(get<1>(i)==-1){
			available.insert(rooms[get<2>(i)]);
		}
	}
	cout << *max.rbegin() << endl;
	for(int i=0; i<n; i++){
		cout << rooms[i] << ' ';
	}
}
