#include <iostream>

int main(){
	int n,m,i,j,max;
	std::cin >> n >> m;
	int bucket[n+m];

	for(i=0;i<n+m;i++)bucket[i]=0;

	for(i=0; i<n;i++){
		for(j=0;j<m;j++){
			bucket[i+j]++;
		}
	}

	//should use a for each
	max=0;
	for(i=0;i<n+m;i++){
		if(max<bucket[i]) max=bucket[i];
	}
	for(i=0;i<n+m;i++){
		if(max==bucket[i]) std::cout << i+2 << "\n";
	}
}
