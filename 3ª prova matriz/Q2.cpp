#include <iostream>
using namespace std;
int main(){
	int a[8][8];
	int aux = 0;
	int soma = 0;
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			a[i][j] = rand()%20;
			
			if((i == j) && (a[i][j] > aux)){
				aux = a[i][j];
			}
			if((i == 7 - j) && (j == 7 - i)){
				soma = soma + a[i][j];
			}
			
			
			if(a[i][j] < 10){
				cout << a[i][j] << "  | ";
			}else{
				cout << a[i][j] << " | ";
			}
		}
		
		cout << endl;
	}
	
	cout << "O maior elemento da diagonal principal é: " << aux << endl;
	cout << "A soma da diagonal secundária da matriz é: " << soma << endl;
}
