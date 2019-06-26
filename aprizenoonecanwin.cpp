#include <bits/stdc++.h> 

using namespace std;

int main(){
	

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

	int n, maxP,item;

	cin >> n >> maxP;

	vector<int> prices;

	int i;
	for(i=0;i<n;i++){
		cin >> item;
		prices.emplace_back(item);
	}

	sort(prices.begin(),prices.end());

	int curr=0, prev=0;

	for(i=0;i<n;i++){
		curr = prices.at(i);
		if(curr+prev <= maxP) prev = curr;
		else break;
	}

	if(prev==0) cout << 1 << endl;
	else cout << i << endl;
}