#include <iostream>
using namespace std;
int main(){
	int a[8][8];
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
				if(i >= j){
					a[i][j] = rand()%100;
					
				}else{
					a[i][j] = 0;
				}
				if(a[i][j] < 10){
					cout << a[i][j] << "  | ";
				}else{
					cout << a[i][j] << " | ";
				}
		}
		cout << endl;
	}
}
