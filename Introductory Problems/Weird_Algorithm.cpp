#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
  	long long int n;
	cin >> n;
	while(n != 1){
	  	cout << n << " ";
		if(n & 1) n = n * 3 + 1;
		else n /= 2;
	}
	cout << 1 << '\n';
}
