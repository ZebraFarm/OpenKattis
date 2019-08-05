#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct person{
	string name;
	string status = "bbbbbbbbbbb";
};

bool cmp(person &a, person &b){

    if(a.status != b.status)
        return a.status < b.status;
    else if(a.name != b.name)
        return a.name < b.name;

	return 1;
}


int main(){

	int Cases, n;
	string line;

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> Cases;
    getline(cin,line);

    while(Cases--){
    	cin >> n;
    	getline(cin,line);

    	vector<person> people;

    	while(n--){

    		person temp;
    		getline(cin,line);
    		
    		//name
            temp.name = "";
            char i = line[0];
            line.erase(0,1);
            while(i != ':'){    
                temp.name += i;
                i = line[0];
                line.erase(0,1);
            }
            line.erase(0,1);

			//num words
			int num=0;
			for(auto i : line)
                if(i == '-')
                    num++;

    		int j=0;
    		char let;
    
    		for(int i = num; i >= 0 ; i--){

    			//first let == ?
    			let = line[j];

    			if(let == 'l'){
    				temp.status[i] = 'c';
    				j += 6;
  				}
    			else if(let == 'm'){
    				temp.status[i] = 'b';
    				j += 7;
  				}
    			else if(let == 'u'){
    				temp.status[i] = 'a';
    				j += 6;
  				}
    		}

    		people.emplace_back(temp);

    	}
   		
   		sort(people.begin(),people.end(),cmp);

   	    for(auto i : people) {
   	    	cout << i.name << "\n";
   	    }

   	    cout << "==============================\n";

    }

    return 0;
}