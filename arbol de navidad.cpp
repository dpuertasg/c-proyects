#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;
int main(){
	int alto,equal;
	cout<<"digite que tan alto es el triangulo\n";
	cin>>alto;
	int mayor = alto + 1,menor = alto - 1;
	equal = alto;
	for(int i = 0; i < alto;i++){
		for(int j = 0; j <= equal; j++){
			if(j > menor && j < mayor){
				cout<<"*";	
			}else{
			cout<<" ";
			}
		}	
		cout<<endl;
		equal = equal + 2;
		mayor++;
		menor--;
	}
	cout<<"\nasi se veria su triangulo isoceles :)";
	return 0;
}
