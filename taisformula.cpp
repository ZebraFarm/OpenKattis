#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int i,j,n;
	double a1,a2,b1,b2,tots;
	cin >> n;
	double total=0;

	cin >> a1 >> b1;
	a1 /= 1000;
	for(i=0;i<n-1;i++){
		cin >> a2 >> b2;
		a2 /= 1000;

		total += (b1+b2)/2 * (a2-a1);

		a1=a2;
		b1=b2;
	}
	cout << setprecision(20) << total << endl;
}