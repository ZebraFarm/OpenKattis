#include <iostream>

using namespace std;

int main(){
	int T,k;
	cin >> T;

	while(T--){
		cin >> k;
		double temp=0;

		while(k--){
			temp += 0.5;
			temp *= 2;
		}

		cout << (int)temp << endl;
	}
}