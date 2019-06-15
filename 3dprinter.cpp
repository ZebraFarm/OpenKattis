#include <iostream>

using namespace std;

int main(){
	int n, printers=1,days=1,jobs=1;
	cin >> n;

	while(n>jobs){
		jobs *= 2;
		days++;
	}

	cout << days << endl;
}