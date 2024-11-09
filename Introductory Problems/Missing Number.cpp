#include<iostream>
using namespace std;

int main(){
	int i, n, num;
	
	cin >> n;
	int arr[n+1]={0};
	
	for(i = 0; i < n-1; i++){
		cin >> num;
		arr[num] = 1;
	}
	
	for(i = 1; i <= n; i++){
		if(arr[i] == 0){
			cout << i;
			break;
		}
	}
	
	return 0;
}
