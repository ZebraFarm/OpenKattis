#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int Case;
    cin >> Case;
    while(Case--){
        
        int n;
        cin >> n;

        int index = -1;
        int sum = 0;
        int past = 0;
        int max = past;

        int curr;

        for(int i = 1; i <= n; i++){
            cin >> curr;

            sum += curr;

            if(curr >= max){
                if(curr == past)
                    index = -1;
                else
                    index = i;
                max = curr;
                past = curr;
            }
        }
        
        if(max > sum/2){
            cout << "majority winner " << index << "\n";
        }else{
            if(index == -1)
                cout << "no winner\n";
            else
                cout << "minority winner " << index << "\n";
        }
    }    
}

