#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	string s;
	cin >> s;
	int ma = 0, cur_cnt = 1;
	for(int i = 1;i < s.length();i++){
	  	if(s[i] != s[i-1]){
		  	ma = max(ma, cur_cnt);
			cur_cnt = 1;
		}
		else cur_cnt++;
	}
	cout << max(ma, cur_cnt) << '\n';
}
