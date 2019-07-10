#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main(){
	string command,keyA,keyB;
	string line;
	int tot,i;
	char op;

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	unordered_map<string,int> myMap;
	unordered_map<int,string> myMap2;

	bool first = true;
	while(getline(cin,line)){

		stringstream in(line);
		in >> command;


		if(command == "def"){

			in >> keyA >> keyB;

			tot = stoi(keyB);

			if(! myMap.insert(pair<string,int>(keyA,tot)).second){
				myMap2.erase(myMap.at(keyA));
				myMap.at(keyA) = tot;

			}
			
			myMap2.insert(pair<int,string>(tot,keyA));


		}
		if(command == "calc"){

			if(first)
				first = false;
			else
				cout << "\n";
			
			bool unknown = false;

			in >> keyA;
			cout << keyA;

			
			if(myMap.count(keyA))
					tot = myMap.at(keyA);
			else
				unknown = true;


			in >> keyB;
			op = keyB[0];

			while(op != '='){

				in >> keyA;
				cout << " " << keyB << " " << keyA;


				if(!unknown){		

					if(myMap.count(keyA) == 1)  
						unknown = false;
					else
						unknown = true; 

					if (op == '-' && !unknown){
						tot -= myMap.at(keyA);
					} else if(op == '+' && !unknown){
						tot += myMap.at(keyA);
					}
				}

				in >> keyB;
				op = keyB[0];

			}

			cout << " " << op << " "; 
			
			if(unknown)
				cout << "unknown";
			else if(myMap2.count(tot)){
				cout << myMap2.at(tot);
			} else {
				cout << "unknown";
			}
		}
		else if(command == "clear"){
			myMap.clear();
			myMap2.clear();
		}

		command = "";
		keyA = "";
		keyB = "";
	}

	return 0;
}