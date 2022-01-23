#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	long long int n, a, b;
	cin >> n;
	while(n--){
	  	cin >> a >> b;
		if(a & 1 && a > b){
			cout << (a - 1) * (a - 1) + b << '\n';
		}
		else if(b & 1 && b > a){
			cout << b * b - a + 1  << '\n';
		}
		else if(a > b){
			cout << a * a - b +1 << "\n";
		}
		else cout << (b - 1) * (b - 1) + a << "\n";
	}
}
