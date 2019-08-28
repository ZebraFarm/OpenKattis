#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	
    string line;

    unordered_map<string,int> vote;
    vector<string> people;

    while(getline(cin,line)){
        if(line == "***")
            break;

        if(vote.insert({line,1}).second){
            people.push_back(line);
        } else{
            vote[line]++;
        }
    }

    int max = 1;
    string winner = "";
    bool run_off = false;
    for(auto person : people){
        if(vote[person] > max){
            max = vote[person];
            winner = person;
            run_off = false;
        } else if (vote[person] == max)
            run_off = true;
    }

    run_off ? cout << "Runoff!\n" : cout << winner << "\n";


}