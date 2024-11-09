#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int i, max=0, tmplen=1;
	string seq;
	
	cin >> seq;
	for(i = 0; i < seq.length()-1; i++){
		if(seq[i] == seq[i+1]){
			tmplen++;
		}
		else{
			if(tmplen > max)
				max = tmplen;
			tmplen = 1;
		}
	}
	if(tmplen > max)
		max = tmplen;
	
	cout << max;
	
	return 0;
}
