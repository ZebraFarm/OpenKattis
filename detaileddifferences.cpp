#include <iostream>
#include <string>

using namespace std;

int main(){

	int cases;
	string line1,line2;

	cin >> cases;
	getline(cin,line1);

	while(cases--){
		getline(cin,line1);
		getline(cin,line2);

		cout << line1 << "\n";
		cout << line2 << "\n";

		for(int i = 0 ; i<line1.size(); i++){
			if(line1[i] == line2[i]) cout << ".";
			else cout << "*";
		}
		cout << "\n\n";
	}

}