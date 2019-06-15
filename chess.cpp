#include <iostream>

//open.kattis.com/problems/chess

int main(){
	int i,n,st_num,mid_num,end_num,col;
	char st_ch,mid_ch,end_ch;


	std::cin >> n;

	//int valid[8][8] = {{0}};
	//for(i=0;i<8;i++) for(int k=0;k<8;k++) if((k+i)%2 == 1) valid[i][k] = 1;


	for(i=0;i<n;i++){
		std::cin >> st_ch >> st_num >> end_ch >> end_num;
		mid_ch = st_ch;
		mid_num = st_num;
		if(((st_ch-'A')+(st_num-1))%2 == ((end_ch-'A')+(end_num-1))%2){

			//same node
			if(st_num == end_num && st_ch == end_ch) {
				std::cout << 0 << " " << st_ch << " " << st_num << std::endl;
			}
				
			//same diagonal
			else if(std::max(st_num,end_num) - std::min(st_num,end_num) == std::max(st_ch-'A',end_ch-'A') - std::min(st_ch-'A',end_ch-'A')) {
				std::cout << 1 << " " << st_ch << " " << st_num << " " << end_ch << " " << end_num << std::endl;
			}
	
			//one transition
			else{
				for(int k=0;k<8;k++){
					for(int j=0;j<8;j++){
						if((std::max(st_num,k) - std::min(st_num,k) == std::max(st_ch-'A',j) - std::min(st_ch-'A',j)) && (std::max(k,end_num) - std::min(k,end_num) == std::max(j,end_ch-'A') - std::min(j,end_ch-'A'))){
							mid_num = k;
							mid_ch = j+'A';
							break;		
						}
					}		
				}
				std::cout << 2 << " " << st_ch << " " << st_num << " " << mid_ch << " " << mid_num << " " << end_ch << " " << end_num << std::endl;
			}
				
		}	
		else std::cout << "Impossible" << std::endl;
	}
}
