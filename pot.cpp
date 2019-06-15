#include <iostream>
#include <cmath>


int main(){
	int i,n,temp,sum=0;
	std::cin >> n;
	for(i=0; i<n;i++){
		std::cin >> temp;
		sum+= pow(temp/10,temp%10);
	}
	std::cout << sum << std::endl;
}
