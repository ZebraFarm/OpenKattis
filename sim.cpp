#include <iostream>
#include <string>
#include <list>
#include <iterator>

int main(){

    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);

    std::list<char> ls;
    std::string str;

    int tests; std::cin >> tests;
    std::getline(std::cin,str);

    while (tests--){

        ls.clear();
        std::list<char>::iterator curser = ls.begin();

        std::getline(std::cin, str);
        for (const char c: str){

            if (c == '<'){
            
                if (curser != ls.begin() ){
                    std::list<char>::iterator curser_old = curser;
                    ls.erase( --curser_old);
                }

            } else if (c == '['){
                curser = ls.begin();
            } else if (c == ']'){
                curser = ls.end();
            } else {
                ls.insert(curser,c);
                //curser++;
            }

        }

        for (auto itr = ls.begin(); itr != ls.end(); itr++){
            std::cout << *itr;    
        }
        std::cout << std::endl;
    }
}