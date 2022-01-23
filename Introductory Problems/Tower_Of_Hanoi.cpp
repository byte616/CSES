#include<bits/stdc++.h>
using namespace std;
void hanoi(int n, int A, int B, int C){
  	if(n == 1) cout << A << " " << C << '\n';
	else{
	  	hanoi(n-1, A, C, B);
	  	hanoi(1, A, B, C);
	  	hanoi(n-1, B, A, C);
	}
}
int main(){
  	ios::sync_with_stdio(0), cin.tie(0);
  	int n;
	cin >> n;
	cout << pow(2, n) - 1 << '\n';
	hanoi(n, 1, 2, 3);
}
