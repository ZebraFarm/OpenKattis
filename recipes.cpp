#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int i,j,k,n,N;
	double portA,portB;
	cin >> n;	

	for(i=0;i<n;i++){
		cin >> N >> portA >> portB;
		cout << "Recipe # " << i+1 << endl;

		double weightA[N],weight,percent[N];
		string ingredient[N];

		for(j=0;j<N;j++) cin >> ingredient[j] >> weightA[j] >> percent[j];

		for(k=0;k<N;k++) if(percent[k]==100.0)break;
		weight = portB/portA * weightA[k];

		for(j=0;j<N;j++){			
			weightA[j] = weight*percent[j]/100;
			cout << ingredient[j] << " " << setprecision(1) <<fixed << weightA[j] << endl;		
		}	

		for(j=0;j<40;j++) cout << "-";
		cout << endl;
	}
}
