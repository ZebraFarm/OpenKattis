#include <iostream>
#include <queue>


using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	int Cases;
	cin >> Cases;

	int g, m_g;
	int temp;

	while(Cases--){

		cin >> g >> m_g;

		priority_queue<int> God;
		priority_queue<int> megaGod;

		for(int i = 0; i < g; i++){
			cin >> temp;
			God.push(temp);
		}

		for(int i = 0; i < m_g; i++){
			cin >> temp;
			megaGod.push(temp);
		}


		while(!God.empty() && !megaGod.empty()){
			if(God.top() < megaGod.top())
				God.pop();
			else
				megaGod.pop();
		}

		if(God.empty())
			cout << "MechaGodzilla\n";
		else
			cout << "Godzilla\n";

	}   
}

