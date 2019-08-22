#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    unordered_map<string,string> dict;

    string line,english,other;

    bool eng;
    while(getline(cin,line)){
        
        if(line.size() == 0)
            break;

        english = "";
        other = "";    
        eng = true;
        for(auto i : line){
            if(i == ' '){
                eng = false;
                continue;
            } else if(eng)
                english += i;
            else
                other += i;
        }
        dict.insert({other,english});
    }    

    while(cin >> other){ 
        try{
            cout << dict.at(other) << "\n";    
        }
        catch(...){
            cout << "eh" << "\n";
        }
    }
}
