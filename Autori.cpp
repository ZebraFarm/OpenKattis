#include <iostream>
#include <regex>
#include <string>

int main(){
	int i=0;
	std::string line;
	getline(std::cin,line);

	std::regex r("[A-Z]");
	
	auto words_b = std::sregex_iterator(line.begin(),line.end(),r);
	auto words_e = std::sregex_iterator();
	for(std::sregex_iterator l = words_b; l != words_e; l++){
		std::smatch m = *l;
		std::string let = m.str();
		std::cout << let;		
	}	
	std::cout << std::endl;
}
