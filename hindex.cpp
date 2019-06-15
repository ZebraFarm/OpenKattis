#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
	int i,n,H=0;
	cin >> n;
	int s[n] = {0};
	for(i=0;i<n;i++) cin >> s[i];
	
	sort(s,s+n);

	if(s[0]>n)H=n;
	else{
		for(i=0;i<n;i++){
			if(H != s[i]) {
				if(min(s[i],n-i)>H) H= min(s[i],n-i);
				else break;
			}
		}
	}
	cout << H << endl;
}
