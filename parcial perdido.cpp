#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;
int main(){
	string s;
	int x,y,z,a,b,c;
	do{
	cout<<"digite la palabra (sin espacios)\n";
	cin>>s;
	cout<<"digite el numero de filas\n";
	cin>>x;
	if(x < 1){
		system("cls");
		cout<<"no es posible, vuelva a digitar\n";
	}}while(x < 1);
	y = s.length();
	z = 1;
	a = 0;
	b = x - 2;
	string aux[x][y], aux2[x][y];
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			aux[i][j] = " ";
		}
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			aux2[i][j] = aux[i][j];
			if(i == 0){
			aux[i][j] = s[j];
			}	
		}
	}
	
	for(int i = 0;i < x; i++){
		for(int j = 0; j < y; j++){
			if(i == 0 && j < x){
				aux2[j][i] = aux[i][j];
			}else if(i == 0 && j >= x){
			
				if((x-2) == 0){
					if(a == 0){
						aux2[a][z] = aux[i][j];
						a++;
						}else{
						z = z - 1;
						aux2[a][z] = aux[i][j];
						a = 0;
						}	
				}else{
					c = j;
					if(b != 0){	
					a = 0;
				
						while(b != 0){
							aux2[b][z] = aux[i][j+a];
							a++;
							b--;
							z++;
						}
					
					}else if (b == 0){
						a = 0;
						while(b != x){
							aux2[b][z] = aux[i][j+a];
							a++;
							b++;
						}	
						b = x - 2;
						j = j + a;
					}
					j = c + a - 1;
				}
		z++;		
		}
	
			}
		}
		
		cout<<"serpenteado:"<<endl;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout<<aux2[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
	cout<<"palabra reorganizada:";
	for(int j = 0; j < x; j++){
		for(int i = 0; i < y; i++){
			
			if(aux2[j][i]!=" "){
			cout<<aux2[j][i];}
		}
	}
	
	return 0;
}
