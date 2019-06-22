#include <iostream>
#include <algorithm>

int main(){
	int vec[4];

	std::cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];
	std::sort(vec,vec+4);

	std::cout << std::min(vec[0],vec[1])*std::min(vec[2],vec[3]) << std::endl;


}