#include <iostream>

using namespace std;

int main(){
	int n,i,a,b=0,sp,total=0;
	cin >> n;
	while(n != -1){
		
		for(i=0;i<n;i++){
			cin >> sp;
			cin >> a;
			total += (a-b)*sp;
			b=a;
		}
		cout << total << " miles" << endl;
		total=0;
		b=0;
		cin >> n;
	}
}
