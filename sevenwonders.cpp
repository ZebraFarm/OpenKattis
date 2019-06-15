#include <iostream>
#include <string>
#include <cmath>

int main(){
	std::string line;
	getline(std::cin,line);
	
	int card[3]={0};
	
	int i;
	for(i=0;i<line.size();i++){
		if(line[i]=='T') card[0]++;
		else if(line[i]=='C') card[1]++;
		else if(line[i]=='G') card[2]++;
	}
	int min=51;
	std::cout << "T: "<< card[0] << std::endl;
	std::cout << "C: "<< card[1] << std::endl;
	std::cout << "G: "<< card[2] << std::endl;

	if(card[0]<min)min=card[0];
	if(card[1]<min)min=card[1];
	if(card[2]<min)min=card[2];

	std::cout << "min: " << min << std::endl;
	int sum = card[0]*card[0] + card[1]*card[1] + card[2]*card[2] + min*7; 
	std::cout << sum << std::endl;
}
