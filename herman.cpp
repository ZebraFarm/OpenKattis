#include <iostream>
#include <cmath>
#include <iomanip>

//Note must use cmath, PI to 10 digits didn't work...

int main(){
	long double r;
	std::cin >> r;
	std::cout << std::setprecision(10) << std::fixed;
	std::cout << M_PI*(r*r) << std::endl; 
	std::cout << (r*r)*2.0 << std::endl;
}