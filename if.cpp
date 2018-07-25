#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int edad;
	
	cout << "Ingrese su edad :" << endl;
	cin >> edad ;
	
	if(edad >= 18){
		cout << "Usted es apto para votar" << endl;
	}else{
		cout << "Usted NO es apto para votar" << endl;
	}
	
	system("PAUSE");
	
	return 0;
	
}
