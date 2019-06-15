#include <iostream>

int main(){
	int K,k,i,N,S1,S2,S3;
	std::cin >> K;
	//int 	
	for(i=0;i<K;i++){
		std::cin >> k >> N;
		S1 = N*(N+1)/2;
		S2 = N*N;		
		S3 = N*(N+1);

		std::cout << k << " " << S1 << " " << S2 << " " << S3 << std::endl;
	}
}
