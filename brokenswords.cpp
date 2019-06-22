#include <iostream>
#include <string>

using namespace std;

int main(){
	int i,N, TB=0,LR=0,swords;
	string temp;

	cin >> N;
	for(i=0;i<N;i++){
		cin >> temp;

		if(temp[0]=='0') TB++;
		if(temp[1]=='0') TB++;
		if(temp[2]=='0') LR++;
		if(temp[3]=='0') LR++;
	}
	swords = min(TB/2,LR/2);

	cout << swords << " " << TB-2*swords << " " << LR-2*swords << endl;
}