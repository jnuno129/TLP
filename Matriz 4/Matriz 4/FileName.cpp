#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
void main() {
	using namespace std;
	srand(time(NULL));
	int n2, i, ns1 = 0, ns2 = 0, ns3 = 0, ns4 = 0, ns5 = 0, contador = 0, acertos = 0, contador2 = 0;
	if (ns1 = ns2, ns1 = ns3, ns1 = ns4, ns1 = ns5, ns2 = ns1, ns2 = ns3, ns2 = ns4, ns2 = ns5, ns3 = ns1, ns3 = ns2, ns3 = ns4, ns3 = ns5, ns4 = ns1, ns4 = ns3, ns4 = ns2, ns4 = ns5, ns5 = ns1, ns5 = ns3, ns5 = ns4, ns5 = ns2) {
		contador2 = contador2+1;
	}
	do {
    ns1 = ns1 + rand() % 50 + 1;
	ns2 = ns2 + rand() % 50 + 1;
	ns3 = ns3 + rand() % 50 + 1;
	ns4 = ns4 + rand() % 50 + 1;
	ns5 = ns5 + rand() % 50 + 1;
	} while (contador ==1);
	
	cout << "digite 5 numeros de 1 a 50: \n";
	for (i = 0; i < 5; i++) {
		cin >> n2;

	}
	if (n2 == ns1, n2 == ns2, n2 == ns3, n2 == ns4, n2 == ns5) {
		contador = contador + 1;
		acertos = acertos + n2;
	}
	cout << "acertaste " << contador << " numeros e os numeros foram" << acertos << "\n";
	std::vector<int>numeros = { ns1, ns2, ns3, ns4, ns5 };
	std::sort(numeros.begin(), numeros.end());
	std::cout << "Os números eram: \n";
	for (int num : numeros) {
		std::cout << num << " ";
	}
}