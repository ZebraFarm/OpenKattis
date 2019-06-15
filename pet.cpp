#include <iostream>


int main(){
	int i,win=0, best=0,a,b,c,d;
	
	for(i=0;i<4;i++){
		std::cin >> a >> b >> c >> d;
		if(a+b+c+d > best){
			best=a+b+c+d;
			win=i+1;
		}
	}
	std::cout << win << " " << best << std::endl;
}
