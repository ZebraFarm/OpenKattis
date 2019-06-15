#include <iostream>
#include <string>

using namespace std;

int main(){
	int i=0,j,row,col, moves=1;
	cin >> row >> col;
	string line[row]={""};
	getline(cin,line[0]);
	if(line[0]!="")i=1;
	for(i;i<row;i++) getline(cin,line[i]);
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			if(line[j][i]=='$')j=row+10;
		}
		if(j==row) moves++;
	}	
	cout << moves << endl;
}
