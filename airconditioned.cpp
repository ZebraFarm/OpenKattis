#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

struct mouse{
	int one;
	int two;
};

int cmp1(mouse a, mouse b){
	return a.one < b.one;
}
int cmp2(mouse a, mouse b){
	return a.two < b.two;
}



int main(){
	int N,n;
	cin >> N;

	vector<mouse> mice;
	mouse temp;

	//populate
	n=N;
	while(n--){
		cin >> temp.one >> temp.two;
		mice.emplace_back(temp);	
	} 

	//order
	sort(mice.begin(),mice.end(),cmp2);
	sort(mice.begin(),mice.end(),cmp1);
	

	int rooms=1,min,max;
	
	temp = mice.at(0);
	min = temp.one;
	max = temp.two;

	for(int i=0;i<N;i++){
		temp = mice.at(i);
		if(max >= temp.one && min <= temp.one) {
			if(max > temp.two){
				max = temp.two;
			}
			if(min < temp.one){
				min = temp.one;
			}
		} else{
			rooms++;
			min = temp.one;
			max = temp.two;
		}
	}

	cout << rooms << endl;

	return 0;
}