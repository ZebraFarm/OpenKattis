#include <iostream>

int main(){
	std::string sname;
	std::string name= "";
	getline(std::cin,sname);

	int i,a=0;
	for(i=0;i<sname.size();i++){
		if(name[name.size()-1] != sname[i]) name+=sname[i];
	}
	std::cout << name << std::endl;
}
