#include <iostream>
#include <string>

int main(){
	int D,M,i,sum=0;
	std::cin >> D >> M;
	std::string day[7] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
	int month[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<M;i++) sum+=month[i-1];
	sum+=D-1;
	std::cout << day[sum%7] << std::endl;
}
