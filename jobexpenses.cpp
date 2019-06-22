#include <iostream>

int main(){
	int i,n,sum=0,temp;
	std::cin >> n;

	for(i=0;i<n;i++){
		std::cin >> temp;

		if(temp<=0)sum += temp*(-1);
	}

	std::cout << sum << std::endl;

}
