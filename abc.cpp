#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int a,b,c;
	string order;
	cin >> a >> b >> c >> order;
	int s[3] ={a,b,c};
	sort(s,s+3);

	cout << s[order[0]-'A'] << " " << s[order[1]-'A'] << " " << s[order[2]-'A'] << " " << endl;

}
