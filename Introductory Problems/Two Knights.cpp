// https://hackmd.io/@Mo-Yu/CSES_1072

#include<iostream>
using namespace std;

int main(){
	long long i, n;
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cout << ( (i*i) * (i*i-1) )/2 - 4*(i-1)*(i-2) << endl;	
	}
	
} 
