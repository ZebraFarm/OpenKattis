#include <iostream>

using namespace std;

int main(){

	int m,a,b,c;

	cin >> m >> a >> b >> c;

	int sum = a+b+c;

	sum > 2*m ?
		cout << "impossible\n" : cout << "possible\n";
}