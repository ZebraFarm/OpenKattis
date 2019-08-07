#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	string line;
	vector<int> pos(3,0); //[UP,DOWN,SAME]

	getline(cin,line);
	char prev = line[0];
	line.erase(0,1);

    char i = line[0];
    if(i == prev){
        if(i == 'U')
            pos[1]++;
        else
            pos[0]++;

    }else{
        pos[2]++;
        if(i == 'U'){
            pos[0]++;
            pos[1] += 2;
        } else{
            pos[1]++;
            pos[0] += 2;
        }
    }

    prev = i;	
    line.erase(0,1);
	for(char i : line){
		if(prev == i){
			if(i == 'D'){
				pos[0] += 2;
			} else{
				pos[1] += 2;
			}
		} else {
			if(i == 'D'){
				pos[0] += 2;
				pos[2] += 1;
			} else{
				pos[1] += 2;
				pos[2] += 1;
			}
		}
		prev = i;
	}    

	for(auto i : pos)
		cout << i << "\n";

}
