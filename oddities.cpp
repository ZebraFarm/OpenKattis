#include <iostream>

int main(){
	int i,n,N;
	std::cin >> N;

	for(i=0;i<N;i++){
		std::cin >> n;
		n & 1 ? std::cout << n << " is odd" << std::endl : std::cout << n << " is even" << std::endl;
	}

}