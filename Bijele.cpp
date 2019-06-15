#include <iostream>

int main(){
	int n1,n2,n3,n4,n5,n6;
	std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
	
	n1-=1;
	n2-=1;
	n3-=2;
	n4-=2;
	n5-=2;
	n6-=8;

	if(n1 != 0) n1*=-1;
	if(n2 != 0) n2*=-1;
	if(n3 != 0) n3*=-1;
	if(n4 != 0) n4*=-1;
	if(n5 != 0) n5*=-1;
	if(n6 != 0) n6*=-1;

	std::cout << n1 << " " << n2  << " " << n3  << " " << n4 << " " << n5 << " " << n6 << std::endl;
}
