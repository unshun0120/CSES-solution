#include<iostream>
using namespace std;

int main(){
	long long t, y, x, diag, ans;
	cin >> t;
	
	while(t--){
		cin >> y >> x;
		//�x�}�﨤�u�W�� : n^2-n+1
		if(y == x){
			diag = x*x-y+1;	//��pow�ȷ|��� 
			ans = diag;
			cout << diag << endl;
		}
		else if(y < x){
			diag = x*x-x+1;
			if(x % 2 == 0){
				//ans = diag-(x-y);
				cout << diag-(x-y) << endl;
			}
			else{
				//ans = diag+x-y;
				cout << diag+x-y << endl;
			}
		}
		else{
			diag = y*y-y+1;
			if(y % 2 != 0){
				//ans = diag-(y-x);
				cout << diag-(y-x) << endl;
			}
			else{
				//ans = diag+y-x;
				cout << diag+y-x << endl;
			}
		}
	}
	
	return 0;
} 
