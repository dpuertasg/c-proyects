#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string palabra;
	cout<<"digite una palabra\n";
	cin>>palabra;
	string replica = palabra;
	int x = 0;
	int y = palabra.length();
	for(int i = 0; i < y ;i++){
    cout<<palabra[i];
	}
	cout<<endl;
	while(x < y){
		for(int i = 0; i < y; i++){
			if(i == y-1){
				palabra[i] = replica[0];
				replica[0] = replica[0+x+1];
			}else{
				palabra[i] = palabra[i+1];
			}
		}
		for(int i = 0; i < y; i++){
			cout<<palabra[i];
		}
		cout<<endl;
		x++;
	}
	

    return 0;
}

  




