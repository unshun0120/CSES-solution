#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int i, n;
	cin >> n;
	if( n == 1 ){
		cout << "1";
		return 0;
	}
	//�N1~n������O�O���ƩM�_�ơA����X���ƦA��X�_�ƧY�i 
	int arr[n], idx=0;
	for(i = 2; i <= n; i+=2, idx++){	//�s���� 
		arr[idx] = i;
	}
	for(i = 1; i <= n; i+=2, idx++){	//�s�_�� 
		arr[idx] = i;
	}
	for(i = 0; i < n-1; i++){	//�ˬd�O�_����Ƭ۾F�B�t�O1�A�Y���hNO SOLUTION 
		if(arr[i]-arr[i+1] == 1){
			cout << "NO SOLUTION";
			return 0;
		}
	}
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	return 0;
		
	
} 
