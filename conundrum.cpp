#include <iostream>
#include <string>

using namespace std;

int main(){

	string line;

	getline(cin,line);

	int a = 0;
	for(int i = 0; i < line.size(); i++){
		switch(i%3){
			case(0):
				if(line[i] != 'P')
					a++;
				break;
			case(1):
				if(line[i] != 'E')
					a++;
				break;
			case(2):
				if(line[i] != 'R')
					a++;
				break;
		}
	}
	cout << a;

}