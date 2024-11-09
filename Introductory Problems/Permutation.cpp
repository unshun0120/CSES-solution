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
	//盢1~n╊Θㄢ帮だ琌案计㎝计块案计块计 
	int arr[n], idx=0;
	for(i = 2; i <= n; i+=2, idx++){	//案计 
		arr[idx] = i;
	}
	for(i = 1; i <= n; i+=2, idx++){	//计 
		arr[idx] = i;
	}
	for(i = 0; i < n-1; i++){	//浪琩琌Τㄢ计綟畉琌1璝Τ玥NO SOLUTION 
		if(arr[i]-arr[i+1] == 1){
			cout << "NO SOLUTION";
			return 0;
		}
	}
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	return 0;
		
	
} 
