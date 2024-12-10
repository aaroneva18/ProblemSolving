#include "ArbolDeNavidad.h"

void ArbolDeNavidad::init(int height) {
	treeIsActive = true;
	int asteriscos = 1;
	for (int i = 1; i < height; i++){
		for (int j = height; j > i; j--) {
			cout << " ";
		}
		for (int p = 0; p < asteriscos; p++) {
			cout << "*";
		}			
		asteriscos += 2;
		cout << "\n";
	}
	deployTree();
}

void ArbolDeNavidad::deployTree() {

	cout << "Introduce una acción: " << "\n";
	cout << "1: Imprimir hola" << "\n";
	cout << "2: Imprimir adios" << "\n";
	cout << "3: Parar" << "\n";

	int accion = 0;
	cin >> accion;
	
	switchTreeActions(accion);

}

void ArbolDeNavidad::switchTreeActions(int p_numAction) {
	
	if (p_numAction > 10) {
		cout << "Acción no valida" << "\n";
		return;
	}

	switch (p_numAction){

	case 1:
		cout << "Hola";
		break;

	case 2:
		cout << "Adios";
		break;

	case 3:
		treeIsActive = false;
		break;

	default:
		break;
	}
}





