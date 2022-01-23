#include<bits/stdc++.h>
using namespace std;
string maps[10];
int ans = 0, col[15], dia1[15], dia2[15];
void dfs(int x){
  	if(x == 8){
	  	ans++;
		return;
	}
  	for(int y = 0;y < 8;y++){
	  	if(col[y] || maps[x][y] == '*' || dia1[x+y] || dia2[x-y+10])continue;
		col[y] = dia1[x+y] = dia2[x-y+10] = 1;
		dfs(x+1);
		col[y] = dia1[x+y] = dia2[x-y+10] = 0;
	}
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	for(int i = 0;i < 8;i++){
	  	cin >> maps[i];
	}
	dfs(0);
	cout << ans <<'\n';
}
