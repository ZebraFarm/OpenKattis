#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int i,b,N;
	cin >> N;
	double p,BPM,ABPM,ABPM_max;

	for(i=0;i<N;i++){
		cin >> b >> p;

		BPM = 60*b/p;
		ABPM = BPM - 60/p;
		ABPM_max = BPM + (BPM-ABPM);


		cout << setprecision(4) << fixed <<  ABPM << " " << BPM << " " << ABPM_max;

		cout << endl;
	}


}