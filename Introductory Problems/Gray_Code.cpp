#include<bits/stdc++.h>
using namespace std;
void gray_code(int n){
	vector<string> v;
	v.push_back("0");
	v.push_back("1");
	for(int i = 2;i < (1 << n);i = i << 1){
	  	// copy in reverse
	  	for(int j = i - 1;j >= 0;j--){
		  	v.push_back(v[j]);
		}
		// add 0 front
		for(int j = 0;j < i;j++){
		  	v[j] = "0" + v[j];
		}
		// add 1 front
		for(int j = i;j < 2 * i;j++){
		  	v[j] = "1" + v[j];
		}
	}
	for(auto i:v) cout << i << '\n';
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	int n;
	cin >> n;
	gray_code(n);
}
