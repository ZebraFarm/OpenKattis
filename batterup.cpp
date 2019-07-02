#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int i,n,hits=0,temp;
	double points=0;
	cin >> n;
	

	for(i=0;i<n;i++){ cin >> temp;
		if(temp >= 0){
			hits++;
			points += temp; 
		}
	}
	cout <<  setprecision(20) << points/hits << endl;

}