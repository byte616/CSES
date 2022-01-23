#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	int t, a, b;
	cin >> t;
	while(t--){
	  	cin >> a >> b;
		cout << ((a <= 2 * b && b <= 2 * a && (a + b) % 3 == 0) ? "YES\n" : "NO\n");
	}
}
