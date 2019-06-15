#include <iostream>
#include <string>


int main(){
	std::string a;
	getline(std::cin,a);
	std::string b;
	getline(std::cin,b);
	if(a.size()>=b.size()){std::cout << "go"<< std::endl;}
	else std::cout << "no"<< std::endl;

}
