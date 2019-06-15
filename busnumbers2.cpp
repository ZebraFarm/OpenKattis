#include <iostream>
//#include <cmath>
#include <algorithm>

int main(){
	
	int i,ans=0,N;

	std::cin >> N;

	int possible[27]=
{1729, 4104,   13832, 20683, 32832, 39312,
 40033, 46683, 64232, 65728, 110656, 110808, 
 134379, 134379, 149389, 165464, 171288, 195841, 
 195841, 195841, 216027, 216125, 262656, 314496, 
 320264, 327763, 373464};

std::sort(std::begin(possible),std::end(possible));

for (i=0;i<27;i++) if(ans < possible[i] && possible[i] <= N) ans = possible[i];
		if(ans != 0 ) std::cout << ans << std:: endl;	
		else std::cout << "none" << std:: endl;	


	/*
	//int i,j,k,l,N,A=0,Max;
	//std::cin >> N;

	Max = (int)std::pow(N,(double)1/3)+1;
	printf("Max: %d \n",Max);

	for(i=1;i<Max;i++){

		for(j=1;j<Max;j++){

			if(i == j) continue;

			for(k=1;k<Max;k++){
			
				if(j == k) continue;
			
				for(l=1;l<Max;l++){
			
					if( i == l  || k == l ) continue;
					

					if(std::pow(i,3)+std::pow(k,3) <= N && std::pow(j,3)+std::pow(l,3) <= N){
						if(std::pow(i,3)+std::pow(k,3) == std::pow(j,3)+std::pow(l,3)){
							A++;
							std::cout << std::pow(i,3)+std::pow(k,3) << ", ";
							if(A%10==0) std::cout << std::endl;
						}
					} else continue;
				}	
			}
		}		
	}
	std::cout << std::endl;
	*/
	


}