#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, arr[25], sum, ans;
void dfs(int level, ll cursum){
  	if(level == n){
	  	if(cursum <= sum / 2){
		  	ans = max(ans, cursum);
		}
		return;
	}
	dfs(level + 1, cursum + arr[level]);
	dfs(level + 1, cursum);
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	cin >> n;
	for(int i = 0;i < n;i++){
	  	cin >> arr[i];
		sum += arr[i];
	}
	dfs(0, 0);
	cout << sum - 2 * ans << '\n';
}
