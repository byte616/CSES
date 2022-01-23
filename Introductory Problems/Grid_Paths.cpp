#include<bits/stdc++.h>
using namespace std;
int ans = 0;
bool vis[10][10];
string s;
bool is_valid(int x, int y){
  	return x <= 6 && y <= 6 && x >=0 && y >= 0 && !vis[x][y];
}
void dfs(int x, int y, int k){
  	if(x == 6 && y == 0){
	  	if(k == 48) ans++;
		return;
	}
	if(is_valid(x, y-1) && is_valid(x, y+1) && !is_valid(x+1, y) && !is_valid(x-1, y)) return;
	if(!is_valid(x, y-1) && !is_valid(x, y+1) && is_valid(x+1, y) && is_valid(x-1, y)) return;
	vis[x][y] = 1;
	if(s[k] == '?' || s[k] == 'L'){
		if(is_valid(x, y-1)) dfs(x, y-1, k+1);
	}
	if(s[k] == '?' || s[k] == 'R'){
		if(is_valid(x, y+1)) dfs(x, y+1, k+1);
	}
	if(s[k] == '?' || s[k] == 'U'){
		if(is_valid(x-1, y)) dfs(x-1, y, k+1);
	}
	if(s[k] == '?' || s[k] == 'D'){
		if(is_valid(x+1, y)) dfs(x+1, y, k+1);
	}
	vis[x][y] = 0;
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
	cin >> s;
	dfs(0, 0, 0);
	cout << ans << '\n';
}
