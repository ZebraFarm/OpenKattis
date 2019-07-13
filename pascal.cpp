#include <bits/stdc++.h>

using namespace std;

int main(){

	long n;
	int iter;

	cin >> n;

	if(n%2 == 0)
		cout << n/2 << "\n";
	else if (n == 1)
		cout << "0\n";
	else {

		long i;
		for(i = 3; i <= sqrt(n) + 1; i += 2){
			if(n%i == 0){
				cout << n-n/i << "\n";	
				return 0;
			}
		}

		//prime
		cout << n-1 << "\n";
	}
}