#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	int z,m,n;
	cout<<"digite N(numero menor que pueden tener las casas a construir)\n";
	cin>>n;
	cout<<"digite M(numero mayor que pueden tener las casas a construir)\n";
	cin>>m;
	int vector1[4];
	int vector2[4];
	int y = 0, a; 	int q = 0;

	for(int x = n-1; x < m;x++){
	z = 0;
	a = x+1;
	for(int i = 0; i < 4; i++){
	vector1[i] = -1;
	vector2[i] = -1;
	}
	while(a > 0){
		vector1[z] = a % 10;
		vector2[z] = vector1[z];
		a = a / 10; 
		z++;
	}
	for(int s = 0; s < 4; s++){
		for(int f = 0; f < 4; f++){
			if( y != 0 ){
				vector1[f] = -1;
				vector2[f] = -1;
			}else if(vector1[s] == vector2[f] && s != f && vector1[f] != - 1 && vector2[f] != -1){
				y = y + 1;
				q = y + q;
			}
		}
	}
	y = 0; 
	}

	cout<<"el numero mayor de casas que puede construir entre esos rangos es:\n"<<(m-n)+1-q;
return 0;}
