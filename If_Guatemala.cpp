#include <iostream>

using namespace std;

int main(){
	string pais = "";
	
	cout << "Ingrese el pais: ";
	cin >> pais;
	
	if(pais == "Guatemala" or pais == "guatemala"){
		cout << "Yo soy de "<<pais<<" mi pais. "<<endl;
	} else {
		cout << pais << endl;
	}
	system("pause");
}
