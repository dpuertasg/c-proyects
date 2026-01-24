#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
int x[10];
for(int i = 0; i < 10;i++){
	x[i]=1 + rand() % 10;
	cout<<x[i]<<endl;
}
int z = x[0];
for(int i = 0; i < 10; i++){
	if(x[i] > z){
		z = x[i];
	}
}
cout<<"\nel mayor es "<<z;
int y = 10;
for(int i = 0; i < 10; i++){
	if(z == x[i]){
		x[i]=0;
	}else{
	if(z - x[i] < y){
		y = z - x[i];
	}}
}
cout<<"\nel numero mayor es "<<(y-z)*(-1);
y = (y-z)*(-1);
int l = 10;
for(int i = 0; i < 10; i++){
	if(x[i]== z || x[i] == y){
		x[i]=0;
	}else{
	if(y - x[i] < l){
		l = y - x[i];
	}}
}
cout<<"\nel numero mayor es "<<(l-y)*(-1);
return 0;}
