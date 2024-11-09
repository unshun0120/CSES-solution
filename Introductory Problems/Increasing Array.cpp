#include<iostream>
using namespace std;

int main(){
	long long i, n, move=0;
	long long arr[n];

	cin >> n;
	for(i = 0; i < n; i++)
		cin >> arr[i];
	
	for(i = 0; i < n-1; i++){
		if(arr[i] > arr[i+1]){
			move += arr[i]-arr[i+1];
			arr[i+1] = arr[i];
		}
	}
	cout << move;
	
	return 0;	
}
