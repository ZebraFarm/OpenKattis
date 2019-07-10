#include <iostream>

using namespace std;

int main(){
	int r, n, temp;
	cin >> r >> n;

	bool arr[r];

	for(int i=0;i<r;i++)
		arr[i] = false;

	if(n == r) cout << "too late";
	else{

		int N = n;
		while(N--){
			cin >> temp;
			arr[temp-1] = true;
		}
		int i;
		for(i=0;i<r;i++)
			if(!arr[i]){
				cout << i+1;
				break;	

			}
	}
	
}