#include <iostream>

using namespace std;

int main(){
	int i,count=0,n,d,temp;
	cin >> n >> d;

	for(i=0;i<n;i++){
		cin >> temp;
		if(d<temp) count++;
		else break;
	}

	if(count != n)cout << "It hadn't snowed this early in " << count << " years!" << endl;
	else cout << "It had never snowed this early!" << endl;
}
