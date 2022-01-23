#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
	int n, arr[200005];
	ll ans = 0;
	cin >> n;
	for(int i = 0;i < n;i++)cin >> arr[i];
	for(int i = 1;i < n;i++){
		if(arr[i] < arr[i-1]){
		  	ans += arr[i-1] - arr[i];
			arr[i] = arr[i-1];
		}
	}
	cout << ans << '\n';
}
