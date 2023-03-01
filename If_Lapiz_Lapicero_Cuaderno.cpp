#include <iostream>

using namespace std;

int main(){
	// And (y) &&
	// Or (o) ||
	char lapiz, lapicero,cuaderno;
	cout << "Trae lapiz (s/n): ";
	cin >> lapiz;
	cout << "Trae lapicero (s/n): ";
	cin >> lapicero;
	cout << "Trae cuaderno (s/n): ";
	cin >> cuaderno;
	
	// Puede entrar a mi clase si usted trae un lápiz y un lapicero
	// And = el valor es verdadero si ambas son verdaderas
	// Puede entrar a mi clase si usted trae un lápiz y un lapicero
	// Or (o) = el valor es verdadero si por lo menos una es verdadera
	
	// Puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
	if(lapiz == 's' || lapicero == 's' && cuaderno == 's'){
		cout << "Ingresa" << endl;
	} else {
		cout << "Lo siento no puede ingresar" << endl;
	}
	
	system("pause");
}
