#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;
int main(){
	int F,C,m,cont;
	cont = 0; 
	cout<<"digite el numero de filas que tendra su triangulo de pascal\n";
	cin>>F;
	C = F+F-1;
	m = (C-1)/2;
	int Pascal[F][C];
	for(int i = 0;i < F; i++){
		for(int j = 0; j < C; j++){
			Pascal[i][j] = 0;
		}
	}
	for(int i = 0; i < F; i++){
		for(int j = 0; j < C; j++){
			Pascal[i][m+cont] = 1;
			Pascal[i][m-cont] = 1;
		}
		cont++;
	}
	for(int i = 1; i < F; i++){
		for(int j = 0; j < C; j++){
			if(Pascal[i][j] == 0 && j != 0 && j != C-1){
				Pascal[i][j] = Pascal[i-1][j+1] + Pascal[i-1][j-1];
				}
		}
	}
	for(int i = 0; i < F; i++){
		for(int j = 0; j < C; j++){
			if(Pascal[i][j] == 0){
				cout<<" ";
			}else{
				cout<<Pascal[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}

