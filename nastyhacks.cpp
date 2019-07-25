#include <iostream>

using namespace std;

int main(){

	int Cases;
	cin >> Cases;

	int a,b,c;
	while(Cases--){
		cin >> a >> b >> c;

		b -= a;

		if(c < b)
			cout << "advertise\n";
		else if(c > b)
			cout << "do not advertise\n";
		else
			cout << "does not matter\n";

	}

}