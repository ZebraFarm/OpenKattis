#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(string &a, string &b){
	//am v pm
	if(a[a.length()-4] != b[b.length()-4])
		return a[a.length()-4]-'a' < b[b.length()-4]-'a';

	// 3dig v 4dig or 12:xx
	if(a.length() != b.length()){

		if(a[1] == '2')
			return true;
		if(b[1] == '2')
			return false;

		return a.length() < b.length();
	}

	if(a[1] == ':'){
		if(a[0] != b[0])
			return a[0]-'0' < b[0]-'0';
		if(a[2] != b[2])
			return a[2]-'0' < b[2]-'0';
		if(a[3] != b[3])
			return a[3]-'0' < b[3]-'0';

	} else{
		if(a[1] == '2' && b[1] != '2')
			return true;
		if(a[1] != '2' && b[1] == '2')
			return false;
		
		if(a[1] != b[1])
			return a[1]-'0' < b[1]-'0';
		if(a[3] != b[3])
			return a[3]-'0' < b[3]-'0';
		if(a[4] != b[4])
			return a[4]-'0' < b[4]-'0';


	}
	return 0;
}


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    string temp;

    bool first =  true;

    while(cin >> n){
    	getline(cin,temp);
    	if(!n) break;
    	if(!first) cout << "\n";

    	vector<string> list;

    	while(n--){
    		getline(cin,temp);
    		list.emplace_back(temp);
    	}
    	sort(list.begin(), list.end(), cmp);

    	for(auto i : list) cout << i << "\n";
    	first = false;
    }

}