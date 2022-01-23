#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int t, digit[20];
ll k, numbers[20];
void count(){ // 單位數 -> 1 * 9 個 ; 雙位數 -> 2 * 90 個 ; ...
	for(int i = 0;i <= 17;i++){
	  	digit[i] = i + 1;
		numbers[i] = (ll) pow(10, i) * 9;
	}
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
	count();
	cin >> t;
	while(t--){
	  	cin >> k;
		if(k < 10){
		  	cout << k << '\n';
			continue;
		}
		int pos = 0;
		for(int i = 0;i < 17;i++){
		  	if(k > digit[i] * numbers[i]){
			  	k -= digit[i] * numbers[i];
				pos = digit[i];
			}
		}
		ll tmp = pow(10, pos);
		tmp += (k / (pos + 1)) -1 ; // tmp: 抵達該數字
		k %= (pos + 1);
		if(!k) cout << tmp % 10 << '\n';
		else{
		  	tmp++;
			string s = to_string(tmp);
			cout << s[k-1] << "\n";
		}
	}
}
