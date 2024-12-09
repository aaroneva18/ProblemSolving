#include "ArbolDeNavidad.h"

void ArbolDeNavidad::init(int height) {

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
}
