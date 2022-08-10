#include <iostream>
using namespace std;
int main(){
	int a[6][5];
	int b[6][5];
	
		
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 5; j++){
			a[i][j] = rand()%20;
			
			if(a[i][j] % 2 == 0){
				b[i][j] = a[i][j] + 5;
			}else{
				b[i][j] = a[i][j] - 4;
			}
		}
	}
	cout << "Matriz A" << endl;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 5; j++){
			
			if(a[i][j] < 10){
				cout << a[i][j] << "  | ";
			}else{
				cout << a[i][j] << " | ";
			}
		}
		cout << endl;
	}
	cout << endl << "Matriz B" << endl;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 5; j++){
			
			if(b[i][j] < 10){
				cout << b[i][j] << "  | ";
			}else{
				cout << b[i][j] << " | ";
			}
		}
		cout << endl;
	}
}
