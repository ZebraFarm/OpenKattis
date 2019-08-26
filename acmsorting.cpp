#include <iostream>
#include <string>

int main(){
	int i, time, tot=0, score=0;
	char temp;
	int wins[100] = {0};
	std::string result;

	for(i=0;i<100;i++){

		std::cin >> time;
		if(time == -1) break;
		
		std::cin >> temp >> result;

		if(result == "right"){
			std::cout << "wins: " << wins[(int)temp-(int)'A'] << std::endl;
			score += time + wins[(int)temp-(int)'A'];
			tot++;
		} else{
			wins[(int)temp-(int)'A'] += 20;
		}		

		std::cout << (int)temp-(int)'A' << " time: " << time << "\n" << std::endl;
	}

	std::cout << tot << " " << score << std::endl;
}
