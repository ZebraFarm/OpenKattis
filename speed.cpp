#include <iostream>
#include <iomanip>
#include <vector>
//#include <unistd.h>

using namespace std;

struct stuff{
	int distance;
	int speed;
};

int main(){
    
    //ios_base::sync_with_stdio(false); 
    //cin.tie(NULL); 

	int Cases, tim;

	cin >> Cases >> tim;
	int n = Cases, dist;
	long double c,tmp;
	stuff temp;

	vector<stuff> arr;
	int min = 1000;
	for(int i = 0; i < Cases; i++){
		cin >> temp.distance >> temp.speed;
		if(temp.speed < min)
			min = temp.speed;
		arr.emplace_back(temp);
	}

	long double pastLow  = -1.0*min;
	long double pastHigh =  9999999;
	c = tim;

	long double ans = tim/2;
	int a = 0;

	//not kinda confused why ans doesnt quite when less than...
	// nor does abs(ans)... strange!
	while(!(ans < 0.000000001 && ans > 0.000000001)  && a < 250){

		c = (pastHigh + pastLow)/2;

		ans = -1*tim;
		for(auto i : arr){
			ans += i.distance/(i.speed + c);
		}

		//cout << ans << "\n";
		if(ans > 0)
			pastLow = c;
		if( ans < 0)
			pastHigh = c;

		//usleep(1500);
		a++;
	}

	cout << setprecision(20);
	cout << c << "\n";
}

