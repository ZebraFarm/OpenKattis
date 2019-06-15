#include <iostream>

using namespace std;

int main(){
	int Pmon,n,i,temp,total;
	cin >> Pmon >> n;
	total = Pmon;
	for(i=0;i<n;i++){
		cin >> temp;
		total += Pmon-temp;
	}
	cout << total << endl;	
}
