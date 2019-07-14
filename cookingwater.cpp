#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


struct tim{
	int t1;
	int t2;
};

bool cmp1(tim a, tim b){
	return a.t1 < b.t1;
}

bool cmp2(tim a, tim b){
	return a.t2 < b.t2;
}

int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	int n;
	cin >> n;

	vector<tim> watched;

	tim temp;
	while(n--){
		cin >> temp.t1 >> temp.t2;
		watched.emplace_back(temp);
	}

	//find smallest second number
	sort(watched.begin(),watched.end(),cmp2);
	int max = watched[0].t2;

	//find largest first number
	sort(watched.begin(),watched.end(),cmp1);
	int min = watched[watched.size()-1].t1;

	min <= max ?
		cout <<  "gunilla has a point\n" : cout << "edward is right\n";

}

