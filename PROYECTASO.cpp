#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main (){
	 int N, aux, y;
	 char grados, direccion;
	 do{
	 cout<<"Digitar el tamaño de la matriz: "<<endl;
	 cin>>N;
	 if(N < 2 || N > 10 )
	 {
	 	cout<<"Tamaño de la matriz invalido."<<endl;
	 }
     }while(N < 2 || N > 10);
     
	 int matriz[N][N];
	 srand(time(NULL));
	 for(int i = 0;i < N; i++){
		 for(int j = 0;j < N; j++){
			matriz[i][j] = rand() % 21 + 5;
		 }
	 }
     int aux2[N][N];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
		aux2[i][j] = matriz[i][j];
	 }cout<<endl;
	}
	cout<<"\n\n";
	
     cout<<"// MATRIZ ORIGINAL //"<<endl;
     for(int i = 0;i < N;i++){
		 for(int j = 0; j < N; j++){
		 	 cout<<setw(5)<<matriz[i][j];
		 }
	         cout<<endl;
	 }
     int cantidadAnillos = N / 2;
	 cout<<"La matriz contiene "<<cantidadAnillos<<" anillos"<<endl;
	 
	 int anillo;
	 do{
	 cout<<"Elige el anillo que desea rotar: ";
	 cin>>anillo;
	 if(anillo < 1 || anillo > cantidadAnillos){
		 cout<<"El anillo no existe"<<endl;
	     } 
     }while(anillo < 1 || anillo > cantidadAnillos);
     
	 do{
     cout<<"Cuantos grados desea rotar el anillo: "<<endl<<"A. 90 "<<endl<<"B. 180 "<<endl<<"C. 270"<<endl;
     cin>>grados;
     if(!(grados == 'a' || grados == 'A'|| grados == 'b' || grados == 'B' || grados == 'c' || grados == 'C')){
     	 cout<<"Cantidad de grados incorrecta. ¡Vuelva a ingresar!"<<endl;
	 }
     }while(!(grados == 'a' || grados == 'A'|| grados == 'b' || grados == 'B' || grados == 'c' || grados == 'C'));
	 
	 cout<<"Hacia que direccion desea rotar el anillo:"<<endl<<"A. Izquierda"<<endl<<"B. Derecha"<<endl;
	 cin>>direccion;

	y = N-anillo;
	int z = y - 1;
	aux = matriz[anillo-1][anillo-1];
	matriz[anillo-1][anillo-1] = matriz[anillo-1][N-anillo];
	matriz[anillo-1][N-anillo] = matriz[N-anillo][N-anillo];
	matriz[N-anillo][N-anillo] = matriz[N-anillo][anillo-1];
	matriz[N-anillo][anillo-1] = aux;

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			
			if(i == anillo-1 && j < N-anillo && j > anillo-1){
				matriz[i][j] = aux2[j][N-anillo]; 
				
			}else if(j == anillo-1 && i < N-anillo && i > anillo-1){
				if((i+1)% 2 == 0){
				matriz[i][j] = aux2[anillo-1][y];	
				}else{
				matriz[i][j] = aux2[anillo-1][y];
				y = y - 1;
				}
				
			}else if(i == N-anillo && j < N-anillo && j > anillo-1){
				matriz[i][j] = aux2[j][anillo-1];
				
				
			}else if( j == N-anillo && i < N-anillo && i > anillo-1){
				if((i+1) % 2 == 0){
			matriz[i][j] = aux2[j][z];
			}else{
						matriz[i][j] = aux2[j][z];
				}
				z = z - 1;
			}
		}
	}
		
		
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout<<setw(5)<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
