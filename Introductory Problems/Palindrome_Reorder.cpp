#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	int cnt[26] = {0}, flag = 0, alpha = 0;
  	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
	  	cnt[s[i] - 'A']++;
	}
	for(int i = 0;i < 26;i++){
	  	if(cnt[i] & 1) flag++, alpha = i;
	}
	if(flag >= 2) cout << "NO SOLUTION\n";
	else{
	  	for(int i = 0;i < 26 ;i++){
		  	if(i != alpha){
			  	int x = cnt[i] / 2;
				while(x--){
				  	cout << char(i + 'A');
				}
			}
		}
		for(int i = 0;i < cnt[alpha];i++) cout << char(alpha + 'A');
	  	for(int i = 25;i >= 0 ;i--){
		  	if(i != alpha){
			  	int x = cnt[i] / 2;
				while(x--){
				  	cout << char(i + 'A');
				}
			}
		}
	}
}
