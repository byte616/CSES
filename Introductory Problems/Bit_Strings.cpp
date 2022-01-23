#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll p = 1e9 + 7;
ll fast(ll a, ll b){
  	if(!b) return 1;
	ll x = fast(a, b/2) % p;
	x = (x * x) % p;
	if(b & 1) x = (x * a) % p;
	return x;
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin >> n;
	cout << fast(2, n);
}
