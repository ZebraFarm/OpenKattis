#include <iostream>

using namespace std;

int main(){
	int N;
	double qual,year,sum=0;

	cin >> N;
	while(N--){
		cin >> qual >> year;
		sum += qual*year;
	}

	cout << sum << endl;
}