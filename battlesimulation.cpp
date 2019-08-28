#include <iostream>
#include <regex>
#include <string>


using namespace std;


int main(){
    
    //ios_base::sync_with_stdio(false); 
    //cin.tie(NULL); 

    string attack;
    getline(cin,attack);

    regex combo("RBL|RLB|BRL|BLR|LRB|LBR");
    attack = regex_replace(attack,combo,"C");

    string counter = "";
    for(auto i : attack){
        switch(i){
            case 'R':
                counter += 'S';
                break;

            case 'B':
                counter += 'K';
                break;

            case 'L':
                counter += 'H';
                break;

            case 'C':
                counter += 'C';
                break;
        }
    }

    cout << counter << "\n";
}

