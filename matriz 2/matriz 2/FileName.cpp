#include <iostream>
#include <string>
#include <locale.h>
void main() {
	using namespace std;
	setlocale(LC_ALL, "portuguese");
	int  i;
	string nomes[5];
	for (i=0;i<5;i++)
	{ 
		cout << "Digite o " <<i+1 <<"º nome: \n";
	cin >> nomes[i];
	}
	for (i = 4; i << 5 >= 0; i--)
	{
		
	cout << nomes[i] <<", ";
	}
}