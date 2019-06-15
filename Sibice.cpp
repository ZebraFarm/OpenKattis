#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int N,L,H,C,i,match;
	cin >> N >> L >> H;
	C = (int)sqrt(L*L + H*H);
	cout << C;
	for(i=0;i<N;i++){
		cin >> match;
		if(match<= C) cout << "DA" << endl;
		else cout << "NE" << endl;
	}
}
