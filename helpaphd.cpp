#include <iostream>
#include <string>
#include <regex>

//using namespace std;

int main(){
    int n,i,a,b;
    std::string line;


    std::cin >> n;
    std::regex re("P=NP");
    std::regex nums("[0-9]+");

    getline(std::cin,line);
    for(i=0;i<n;i++){

        getline(std::cin,line);

        if(std::regex_search(line.begin(),line.end(),re)) std::cout << "skipped" << std::endl;
        else {
            std::sregex_iterator numb = std::sregex_iterator(line.begin(),line.end(),nums);
 
            std::smatch m = *numb;
            a = std::stoi(m.str());
            numb++;
            m = *numb;
            b = std::stoi(m.str());     
            std::cout << a+b << std::endl;
        }
    }
    
}
