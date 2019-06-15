#include <iostream>
#include <algorithm>
#include <array>

int main(){
	int i,n,temp,sum=0;
	std::cin >> n;
	int v[n];

	for(i=0;i<n;i++) {
		std::cin >> temp;
		v[i] = temp;
	}

	// Fill the array by values
	std::sort(v,v+n);

	for(i=n-1;i>=0;i--){
		if(i>1){
			sum+= v[i] + v[--i];
			i--;
		} else{sum+=v[i];}
	}
	std::cout << sum << std::endl;
}
