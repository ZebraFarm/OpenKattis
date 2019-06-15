#include <iostream>
#include <string>

using namespace std;

int check(string city[100],string name){
	for(int i=0;i<100;i++){
		if(city[i]==name) return 0;
	}
	return 1;
}

int main(){
	int i,j,n,N,trip;
	cin >> n;
	string name;
	for(i=0;i<n;i++){
		trip=0;
		string city[100] = {""};
		cin >> N;
		for(j=0;j<N;j++){
			cin >> name;
			if(check(city,name)){
				city[trip]=name;
				trip++;
			}
		}
		cout << trip << endl;
	}

}
