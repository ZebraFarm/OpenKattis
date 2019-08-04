#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int Cases;
    cin >> Cases;

    int size,temp;
    int start;
    
    
    while(Cases--){
        bool found = false;
        cin >> size;     
        cin >> temp;
        start = temp;
        
        for(int i = 2; i <= size; i++){
            cin >> temp;
            if(!found && temp - start != 1){
                cout << i << "\n";
                found = true;
            }
            start = temp;
        }    
    }
}

