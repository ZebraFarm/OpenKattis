#include <iostream>
#include <string>
#include <regex>

//using namespace std;

int main(){
    int i,a,b;
    std::string line;


    std::cin >> line;
    std::regex re("ss");

    if(std::regex_search(line.begin(),line.end(),re)) std::cout << "hiss" << std::endl;
    else {
        std::cout << "no hiss" << std::endl;
    }    
}