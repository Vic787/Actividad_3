#include <iostream>

using namespace std;

int main(){
	//N�mero es positivo > 0 o negativo < 0
	int  num = 0;
	cout << "Ingrese el numero: ";
	cin >> num;
	
	if(num > 0){
		//Entra ac� cuando la condici�n es verdadera
		cout << "Positivo" <<endl;
	} else { // <= 0
		if(num == 0){ // 0
			cout << "Neutro" << endl;
		} else { // <0
			cout << "Negativo" << endl;
		}
	}
	system("pause");
}
