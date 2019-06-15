#include <iostream>

using namespace std; 

int main() { 
	//Reference https://www.physicsforums.com/threads/c-program-that-gives-u-the-prime-factors.404653/ 
	int a;
	unsigned long long int num,i;
	int primes[1000]={0}; 
	cin >> num; 
	for (i=2; i <= num; i++) { 
		while(num % i == 0) { 
			num /= i;
			primes[a++]=i; 
		}
		if(num == 1) break;
	} 
		
	for(i=0;i<1000;i++) {
		
		cout << primes[i] << " "; 	
		if(primes[++i] == 0) break;
	}

}



