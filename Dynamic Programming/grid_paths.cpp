#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int, int>
 
int n;
ll mod=1e9+7;
 
int main(){
	cin >> n;
	ull grid[n][n];
	char c;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> c;
			if(c=='*'){
				grid[i][j]=-1;
			}
			else if(i==0&&j==0){
				grid[i][j]=1;
			}
			else if(i==0){
				grid[i][j]=grid[i][j-1];
			}
			else if(j==0){
				grid[i][j]=grid[i-1][j];
			}
			else{
				grid[i][j]=0;
			}
		}
	}
	
	for(int i=1; i<n; i++){
		for(int j=1; j<n; j++){
			if(grid[i][j]==-1){
				continue;
			}
			if(grid[i-1][j]==-1&&grid[i][j-1]==-1){
				grid[i][j]=-1;
			}
			else if(grid[i-1][j]==-1){
				grid[i][j]=grid[i][j-1];
			}
			else if(grid[i][j-1]==-1){
				grid[i][j]=grid[i-1][j];
			}
			else{
				grid[i][j]=(grid[i-1][j]+grid[i][j-1])%mod;
			}
		}
	}
	if(grid[0][0]==-1){
		cout << 0;
		return 0;
	}
	else if(grid[n-1][n-1]==-1){
		cout << 0;
		return 0;
	}
	cout << grid[n-1][n-1];
}
