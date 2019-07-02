#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

	int Cases;
    cin >> Cases;

    int n,m,temp,first_m=0;

    while(Cases--){
    	cin >> n >> m;
    	vector<int> nums;
    	vector<int> m_pos;

    	for(int i=0;i < n; i++) {
    		cin >> temp;
    		nums.emplace_back(temp);

    		if(temp == m)
    			m_pos.emplace_back(i);
    	}


    	int sum,top = 0;
    	for(int i : m_pos){
    		sum = m;


       		//scan up
    		for(int j=i+1; j<n ; j++){
    			if(nums.at(j) <= m) 
    				break;

    			sum += nums.at(j);
    		}

    		//scan down
    		for(int j=i-1; j>=0 ; j--){
    			if(nums.at(j) <= m) 
    				break;

    			sum += nums.at(j);
    		}

    		top = max(top,sum);
    	}

    	cout << top << "\n";
    }	

    return 0;
}