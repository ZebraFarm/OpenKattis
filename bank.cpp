#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int p,t;
    cin >> p >> t;

    vector<vector<int>> v(t+1); 

    int kr,wait;

    for(int i = 0; i < p; i++){
        cin >> kr >> wait;
        v[wait].emplace_back(kr);
    }

    vector<int> index;
    int sum = 0;
    priority_queue<int>  heap;

    for(int i = t; i >= 0; i--){
            for(auto j : v[i])
                heap.push(j);
            if(heap.empty())
                continue;
            else{
                sum += heap.top();
                heap.pop();
            }
    }
    
    cout << sum << endl;
}
