#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int i,j,n,N;
	double clAvg,sum,above;
	
	cin >> n;
	for(i=0;i<n;i++){
		above=0;
		sum=0;
		cin >> N;
		int stAvg[N];
		for(j=0;j<N;j++){
			cin >> stAvg[j];
			sum += stAvg[j];
		}
		clAvg = sum/N;
		for(j=0;j<N;j++) if(stAvg[j] > clAvg)above++;

		cout << fixed << setprecision(3) << (above/N)*100.0  << "%" << endl;
	}
}
