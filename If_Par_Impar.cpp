#include <iostream>

using namespace std;

int main(){
	// Determinar si un número es pao o impar
	int num = 0;
	cout << "Ingrese numero: ";
	cin >> num;
	
	//Dividir un número entre dos su residuo es cero entonces es par caso contrario es impar
	if((num % 2) == 0){
		cout << "Par" << endl;
	} else {
		cout << "Impar" << endl;
	}
	system("pause");
}
