#include "ArbolDeNavidad.h"

void ArbolDeNavidad::init(int p_height) {
	height = p_height;
	treeIsActive = true;
	deployInferface();
}

void ArbolDeNavidad::deployInferface() {

	printTree();
	deployText();
	int accion;
	cout << "Introduce un número: "; 
	cin >> accion;
	cout << "\n";

	while (treeIsActive) {
		switchTreeActions(accion);
	}

}

void ArbolDeNavidad::printTree(){
	int asteriscosCount = 1;

	espacios.reserve(height);	
	cout << "espacios: " << espacios.capacity() << "\n";
	cout << "asteriscos: " << asteriscos.capacity() << "\n";

	for (int i = 0; i < espacios.capacity(); i++) {
		asteriscos.reserve(asteriscosCount);
		for (int j = espacios.capacity(); j > i; j--) {
			cout << " ";
		}
		for (int p = 0; p < asteriscos.capacity(); p++) {
			cout << "*";
		}
		asteriscosCount += 2;
		cout << "\n";
	}
}


void ArbolDeNavidad::deployText() {

	cout << "Elige una acción: " << "\n";
	cout << "1: Imprimir hola" << "\n";
	cout << "2: Imprimir adios" << "\n";
	cout << "3: Parar" << "\n";
}



void ArbolDeNavidad::switchTreeActions(int p_numAction) {
	
	if (p_numAction > 10) {
		cout << "Acción no valida" << "\n";
		return;
	}

	switch (p_numAction){

	case 1:
		cout << "Hola" << "\n";
		deployInferface();
		break;

	case 2:
		cout << "Adios" << "\n";
		deployInferface();
		break;

	case 3:
		treeIsActive = false;
		break;

	default:
		break;
	}
}





