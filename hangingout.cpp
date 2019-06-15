#include <iostream>
#include <string>

using namespace std;

int main(){
	int i,max,a,b,group=0,curr=0;
	string action;
	cin >>  max >> a;

	for(i=0;i<a;i++){
		cin >> action >> b;
		if(action == "enter"){
			if(max >= curr+b)curr+=b;
			else group++;
		}else curr-=b;
	}
	cout << group << endl;
}
