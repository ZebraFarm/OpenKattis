#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	int n,N,i;
	int lookup[11] = {1,1,2,6,4,0,0,0,0,0,0};

	cin >> n;
	for(i=0;i<n;i++){
		cin >> N;
		cout << lookup[N] << endl;;
	}
}
