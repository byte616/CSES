#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
	int n, x, ans = 0;
	cin >> n;
	for(int i = 1;i <= n-1;i++){
		cin >> x;
		ans ^= i ^ x;
	}
	ans ^= n;
	cout << ans << '\n';
}
