#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int i,n,count=0;
	vector<string> cost;
	string temp;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<string,int> map;

	cin >> n;
	while(n--){

		cin >> temp;
		if(! map.emplace(temp,0).second)
			map.at(temp)++;
	}

	int min = 100000;
	for(auto i : map){
		if(min > i.second)
			min = i.second;
	}

	for(auto i : map){
		if(i.second == min)
			cost.emplace_back(i.first);
	}

	sort(cost.begin(),cost.end());

	for(auto i : cost)
		cout << i << "\n";

}
