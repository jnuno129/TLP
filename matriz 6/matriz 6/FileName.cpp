#include <iostream>
#include <string>
void main() {
	using namespace std;
	int alt, idades,i,soma=0,media,contador=0;
	
	for (i = 0; i < 29; i++) {
		cout << "qual é a idade?\n";
		cin >> idades;
		cout << "qual é a altura?\n";
		cin >> alt;
		
		if (idades >= 13){
			soma = soma + alt;
		}
		media = soma / 30;
		if (alt < media) {
			contador++;
		}
		
	}
	
	cout << contador << "alunos de mais de 13 anos tem menor altura do que a media";
}