#include <iostream>
#include <string>

int main(){
	int day;
	std::string mon;

	std::cin >> mon >> day;
	((mon == "OCT" && day == 31) || (mon == "DEC" && day == 25)) ? std::cout << "yup" : std::cout << "nope";
	std::cout << std::endl;

}