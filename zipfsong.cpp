#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct song{
	string name;
	long long q;
	int song_num;
};

bool cmp(song a, song b){
	if(a.q != b.q)
		return a.q > b.q;	

	return a.song_num < b.song_num;
}

int main(){
	int n,m;
	long long plays;
	song temp;
	vector<song> album;

	cin >> n >> m;

	for(int i=1; i <= n; i++){

		cin >> plays >> temp.name;
		temp.song_num = i;
		temp.q = plays*i;

		album.emplace_back(temp);
	}

	sort(album.begin(),album.end(),cmp);

	for(int i=0; i<m; i++)
		cout << album[i].name <<"\n";


}