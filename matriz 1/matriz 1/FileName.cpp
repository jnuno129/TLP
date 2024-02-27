#include <iostream>
#include <string>
void main() {
	using namespace std;
	int n1, qnn=0, snn=0,i,es;
	cout << "Escreva 10 numero positivo ou negativo: \n ";
	for (i = 0; i < 10; i++) {
		
		cin >> n1;
		if (n1 < 0) {
		qnn = qnn + 1;
		snn=snn+n1;
	    }
	
	}
	
	cout << "deseja saber a soma dos numeros negativo(1) ou a quantidade de numeros negativos(2)?\n";
		cin >> es;
		switch (es) {
		case 1: {
			cout << snn << "\n";
			break;
		}
			

		case 2:
			cout << qnn << "\n";
			break;
		}


}