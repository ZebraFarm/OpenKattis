#include <iostream>
#include <string>

using namespace std;

int main(){
	int i,j,n,sum=0;
	string card;
	char a,trump;
	cin >> n >> trump;
	for(i=0;i<n;i++){
		for(j=0;j<4;j++){
			cin >> card;
			a = card[0];
			if(a=='A') sum += 11;
			if(a=='K') sum += 4;
			if(a=='Q') sum += 3;
			if(a=='J'){
				if(card[1] == trump) sum+=20;
				else sum +=2;
			}
			if(a=='T') sum += 10;
			if(a=='9' && card[1] == trump) sum+=14;
		}
	}
	cout << sum << endl;
}
