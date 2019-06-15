#include <iostream>

using namespace std;

int main(){
	int i,N,Q,task,a,b;
	cin >> N >> Q;
	int comp[N]={0};
	for(i=0;i<N;i++) cin >> comp[i];

	for(i=0;i<Q;i++){
		cin >> task >> a >> b;
		if(task == 1) comp[a-1] = b; 
		else cout << max(comp[a-1],comp[b-1])-min(comp[a-1],comp[b-1]) << endl;
	}
}