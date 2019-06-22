#include <iostream>

using namespace std;

int main(){
	int N, days=0,a,b;

	int date[365]= {0};

	cin >> N;
	while(N--){
		cin >> a >> b;
		for(int i=a-1;i<=b-1;i++) date[i]=1;
	}
	for(int i=0;i<365;i++) if( date[i]==1 ) days++;

	days >= 365 ? cout << 365 << endl : cout << days << endl;
}