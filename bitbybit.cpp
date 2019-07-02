#include <bits/stdc++.h>
#include <string>

using namespace std;

void Clear(char reg[32],int i){
	reg[i] = '0';
}

void Set(char reg[32],int i){
	reg[i] = '1';
}

void And(char reg[32],int i, int j){
	if(reg[i] == '?' && reg[j] == '?') reg[i] = '?';
	else if(reg[i] == '0' || reg[j] == '0') reg[i] = '0';
	else if(reg[i] == '?' || reg[j] == '?') reg[i] = '?';
	else reg[i] = '1';
}

void Or(char reg[32],int i, int j){
	if(reg[i] == '?' && reg[j] == '?') reg[i] = '?';
	else if(reg[i] == '1' || reg[j] == '1') reg[i] = '1';
	else if(reg[i] == '?' || reg[j] == '?') reg[i] = '?';
	else reg[i] = '0';
}

int main(){

	char reg[32] = {'0'};
	for(int i=0;i<32;i++) reg[i]= '?';
	int n,i,j;
	string command;

	while(cin >> n){
		if(n == 0) break;

		for(int i=0;i<32;i++) reg[i]= '?';

		while(n--){

			cin >> command;
			switch(command[0]){
				case 'C' :
					cin >> i;
					Clear(reg,i);
					break;
				case 'S' :
					cin >> i;
					Set(reg,i);
					break;
				case 'A' :
					cin >> i >> j;
					And(reg,i,j);
					break;
				case 'O' :	
					cin >> i >> j;
					Or(reg,i,j);
					break;
				default :
					break;

			}
		}
		for(int i=31; i>=0 ; i--) cout << reg[i];
		cout << "\n";

	}
}