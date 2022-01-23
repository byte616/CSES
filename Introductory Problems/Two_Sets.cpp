#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	ll n, cnt[1000005] = {0};
	vector<int> v;
	cin >> n;
	ll x = n * (n + 1) / 2;
	if(x & 1) cout << "NO\n";
	else{
	  	cout << "YES\n";
		x /= 2;
		for(int i = n;i >= 1;i--){
		  	if(x >= i){
			  	v.push_back(i);
				x -= i;
				cnt[i] = 1;
			}
		}
		cout << v.size() << '\n';
		for(auto i:v)cout << i << " ";
		cout << "\n" << n - v.size() << '\n';
		for(int i = 1;i <= n;i++) if(!cnt[i]) cout << i << " ";
	}
}
