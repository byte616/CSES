#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	if(n == 1) cout << 1 << '\n';
	else if(n ==2 || n==3) cout << "NO SOLUTION\n";
	else {
	  	for(int i = n-1;i >= 1;i -= 2) cout << i << " ";
		for(int i = n;i >= 1;i -= 2) cout << i << " ";
	}
}
