#include <iostream>
#include <string>

using namespace std;

int main(){
	int N,p,sum;
	string num,ans;

	while(cin >> N){
		if(N==0) break;
		
		num = to_string(N);
		sum=0;
		int j=11;
		for(auto i : num) sum += i-'0';
		
		for(j;j>10;j++){
			int sum2=0;		
			ans = to_string(N*j);
			for(auto i : ans) sum2 += i-'0';

			if(sum == sum2)break;
		}



		cout << j << endl;
	}


}