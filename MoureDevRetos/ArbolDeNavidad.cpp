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
	if(espacios.capacity() > height || espacios.size() > height) {
		cout << "es mayor";
		return;
	}
	int asteriscosCount = 1;
	string space = " ";
	espacios.reserve(height);	
	for (int i = 0; i < height; i++) {
		for (int j = espacios.capacity(); j > i; j--) {
			cout << space;
		}
		for (int p = 0; p < asteriscosCount; p++) {
			cout << "*";
		}
		asteriscosCount += 2;
		cout << "\n";
		espacios.push_back(space);
	}
	cout << "size" << espacios.size();
	cout << "capacity" << espacios.capacity();
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
		deployInferface();
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





