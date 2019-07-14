#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
    
    int b1,b2;
    int temp;
    
    vector<int> blocks;

    int n = 6;
    while(n--){
        cin >> temp;
        blocks.emplace_back(temp);
    }
    cin >> b1 >> b2;

    bool found = false;
    int j,k;
    int sum;
    for(j = 1; j < 5; j++){

        for(k = j+1; k < 6; k++){
            sum = blocks[k] +  blocks[0] + blocks[j];

            if(sum == b1 || sum == b2){
                found = true;
                break;
            }
        }
        if(found)
                break;
    }
   


    if(blocks[0] + blocks[j] + blocks[k] == b1){
    
        vector<int> vB1 = {blocks[0],blocks[j],blocks[k]};
        sort(vB1.begin(),vB1.end());

        vector<int> vB2;
        for(auto i : blocks){
            if(vB1[0] != i && vB1[1] != i && vB1[2] != i)
                    vB2.emplace_back(i);
        }
    
        sort(vB2.begin(),vB2.end());

        cout << vB1[2] << " " << vB1[1] << " " << vB1[0] << " ";
        cout << vB2[2] << " " << vB2[1] << " " << vB2[0];    
    } else{
    
        vector<int> vB2 = {blocks[0],blocks[j],blocks[k]};
        sort(vB2.begin(),vB2.end());

        vector<int> vB1;
        for(auto i : blocks){
            if(vB2[0] != i && vB2[1] != i && vB2[2] != i)
                    vB1.emplace_back(i);
        }
    
        sort(vB1.begin(),vB1.end());

        cout << vB1[2] << " " << vB1[1] << " " << vB1[0] << " ";
        cout << vB2[2] << " " << vB2[1] << " " << vB2[0];
    }
}

