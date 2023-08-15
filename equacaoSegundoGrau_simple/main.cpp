/////////////////////////////////////////
// codigo criado por kato @ 2023-08-14 //
//		  github.com/kato8088          //
/////////////////////////////////////////

#include <iostream>
#include <math.h>

using namespace std;

float A, B, C, delta, raizX1, raizX2;
bool equacaoIncompleta;
int run;

int calc() {
	cout << "calculadora de equacoes do segundo grau completa e incompleta!\n";
	cout << "Ax^2 +- Bx +- C = 0\natencao aos sinais!\n\n";
	cout << "insira o valor de A: ";
	cin >> A;
	while (A <= 0)
	{
		cin.clear();
		A = 1;
		cout << "a variavel A nao pode ser menor ou igual a zero! \ntente novamente: ";
		cin >> A;
	}
	cout << endl << "insira o valor de B: ";
	cin >> B;
	cout << endl << "insira o valor de C: ";
	cin >> C;
	if (B || C == 0) {
		equacaoIncompleta = true;
		cout << endl << "a equacao inserida eh incompleta!";
	}
	else
	{
		equacaoIncompleta = false;
		cout << endl << "a equacao inserida eh completa!\n\n";
	}

	delta = pow(B, 2) - 4 * A * C;
	// formula delta
	cout << endl << "o delta / discriminante eh igual a: " << delta << endl;
	if (delta < 0)
	{
		cout << "delta negativo, portanto sem resolucao nos numeros reais...\n\n";
		goto restart1;
	}

	raizX1 = (B * -1 + sqrt(delta)) / (2 * A);
	cout << "a raiz X1 eh igual a: " << raizX1 << endl;

	raizX2 = (B * -1 - sqrt(delta)) / (2 * A);
	cout << "a raiz X2 eh igual a: " << raizX2 << endl << endl;
	// raizes
	// raiz x1 positiva e raiz x2 negativa
restart1:
	char restart{};
	cout << "calcular outra vez? (s/n) ";
	cin >> restart;
	switch (restart)
	{
	case 's':
	case 'S':
	case 'y':
	case 'Y':
		system("cls");
		return run = 1;
	default:
		return run = 0;
	}
}

int main() {
	do
	{
		calc();
	} while (run == 1);
	return 1;
}