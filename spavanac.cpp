#include <iostream>

int main(){
	int hr,min,a,b;
	std::cin >> hr >> min;
	min = min-45;
	if(min<0) {
		min = 60- min*-1;
		hr--;
		if(hr<0) hr=23;
	}

	std::cout << hr << " " << min << std::endl;
}
