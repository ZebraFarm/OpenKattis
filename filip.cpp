#include <iostream>
#include <string>

using namespace std;

int main(){
	string A,B;
	string Ans;

	cin >> A >> B;

	if(A[2] > B[2]){
		Ans = A;
	}

	else if(A[2] == B[2]){
		if(A[1] > B[1]){
			Ans = A;
		}

		else if(A[1] == B[1]){
			if(A[0] > B[0]){
				Ans = A;
			}
			else{
				Ans = B;
			}

		}else{
			Ans = B;	
		}

	}else{
		Ans = B;
	}

	cout << Ans[2] << Ans[1] << Ans[0];
}