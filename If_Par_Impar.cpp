#include <iostream>

using namespace std;

int main(){
	// Determinar si un n�mero es pao o impar
	int num = 0;
	cout << "Ingrese numero: ";
	cin >> num;
	
	//Dividir un n�mero entre dos su residuo es cero entonces es par caso contrario es impar
	if((num % 2) == 0){
		cout << "Par" << endl;
	} else {
		cout << "Impar" << endl;
	}
	system("pause");
}
