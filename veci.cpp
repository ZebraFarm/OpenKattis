//#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;


//This is a super long and verbos approach, k=just learning all
//these functions honestly...

//need to figure out the next_permutaion function.

int main(){
	
	string line;
	getline(cin,line);
	
	int n = line.length();
	char temp,num[n+1];
	strcpy(num,line.c_str());

	bool same = true;
	int i,j;

	for(j=n-1;j>=0;j--){
		if(!same) break;
		
		num[j];

		for(i=j-1; i>=0; i--){

			if(num[i] < num[j]){
				char a = num[i];
				num[i] = num[j];
				num[j] = a;

				i++;
				same = false;
				break;
			}
		}
	}

	sort(num+i,num+n);
	
	
	if(same) cout << 0;
	else for(i=0; i<n; i++) cout << num[i];	
	cout << endl;
}