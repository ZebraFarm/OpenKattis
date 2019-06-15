#include <iostream>
#include <string>

int main(){
	int N,i,a,num,mod,past;
	std::string line;
	std::cin >> N;
	getline(std::cin,line);

	for(i=1;i<=N;i++){
		getline(std::cin,line);
		std::cout << "Case #" << i << ": ";
	
		for(int k=0;k<line.length();k++){
			
			if(line[k] == ' ') {
				num=0;
				mod=0;
			} else{
			a = line[k]-'a';

			if((a>=15))
			{
				if(a<=18){
					mod = a-15;
					num = 7;
				} else if(( a>=22)){
					mod = a-22;
					num = 9;
				} else{
					mod = a-19;
					num = 8;
				}
			
			} else
			{
				mod = a%3;
				num = a/3+2;	
			}
			}
			if(num == past) std::cout << " ";
			while(mod-- >= 0) std::cout << num;
			past = num;
		}
		std::cout << std::endl;
	}


}