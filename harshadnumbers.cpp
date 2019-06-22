#include <iostream>
#include <string>

using namespace std;

int main(){
	int orig,sum=0,mod=0;
	cin >> orig;

	string num;
	int i=0;

	for(i=orig;i>=orig;i++){
		num = to_string(i);	
		sum = 0;
		for(auto j : num) sum += j-'0';
		if(i%sum == 0) break;
	}

	cout << i << endl;

	return 0;
}