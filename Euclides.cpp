#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
int n1, n2, z, y;

cout<<"ingrese primer numeros \n";
cin>>n1;
cout<<"ingrese segundo numero \n";
cin>>n2;

if (n1 > n2){
	z = n1 % n2;
	if(z == 0){
		cout<<n2<<" es el maximo comun divisor";
	}else{
		while(z != 0){
			y = z;
			z = n2 % z;
			
	
		}	cout<<y<<" es el maximo comun divisor";
	}
}else{
if(n2 > n1){
z = n2 % n1;
if(z == 0){
cout<<n1<<" es el maximo comun divisor";
}else{
	while(z != 0){
	y = z;
	z = n1 % z;
	}cout<<y<<" es el maximo comun divisor";
	}
}else{
	cout<<n1<<" es el maximo comun divisor";
}
}

	
	return 0;
}
 


