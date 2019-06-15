#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int i,n;
	double v,y,theta,t,x,h1,h2,g=9.81;
	cin >> n;
	cout << endl;
	for(i=0;i<n;i++){
		cin >> v >> theta >> x >> h1 >> h2;
		
		t = x/(v*cos(theta*3.1415926535/180));
		y = v*t* sin(theta*3.1415926535/180)-0.5*g*t*t;

		if(y>=(h1+1) && y<=(h2-1)) cout << "Safe" << endl; 
		else cout << "Not Safe" << endl; 	
	}
}
