#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    string line;
    
    int start;
    cin >> start;
    getline(cin,line);
        
    vector<vector<int>> vec;

    bool good = true;
    while(getline(cin,line) && good){

        stringstream in(line);
        int temp;
        vector<int> tempVec;

        while(in >> temp && good){
                if(temp == -1){
                        good = false;
                        break;
                }
                tempVec.push_back(temp);
        }
    
        if(good)
            vec.push_back(tempVec);

    }

    int end = vec[0][0];
    int curr = start;
    
    while(end != curr){
        for(auto i :  vec){
            for(auto j : i){ 
                if(curr == j){
                    cout << curr << " ";
                    curr = i[0];
                }
            } 
        }
    }

    cout << end << endl;

}

