#include <bits/stdc++.h>

//There is a way to do this that you do not need to build
// and insert into a premade vector. I am just trying to write
//this fast and get a solution/answer. (unordered_map probably...)

using namespace std;

//Weighted Quick Union:
struct node{
	int parent;
	int height;
};

class WeightQuickUnion{
	public:
		void unite(int a,int b);
		int find(int a);
		WeightQuickUnion(int n);

	private:
		vector<node> list;
};

//connects A to B
void WeightQuickUnion::unite(int a, int b){
	int i = find(a);
	int j = find(b);

	if(list.at(i).height < list.at(j).height){
		list.at(i).parent = j;
	} else{
		list.at(j).parent = i;
		list.at(i).height = max(list.at(i).height,list.at(j).height+1);
	}
	
}

//Go up the connection chain
int WeightQuickUnion::find(int a){

	while(a != list.at(a).parent){

		//Path compression
		list.at(a).parent = list.at(list.at(a).parent).parent;

		a = list.at(a).parent;
	}
	return a;
}

WeightQuickUnion::WeightQuickUnion(int n){

	node temp;
	temp.height = 0;

	for(int i=0; i < n; i++){ 
		temp.parent = i;
		list.emplace_back(temp);
	}
}

int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	
	int n, query;

	cin >> n >> query;

	WeightQuickUnion set(n);

	string op;
	int a, b;

	while(query--){
		cin >> op >> a >> b;

		if(op == "="){
			set.unite(a,b);
		} else{
			set.find(a) == set.find(b) ?
				cout << "yes\n" : cout << "no\n";
		}
	}

}