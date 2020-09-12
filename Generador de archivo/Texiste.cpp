#include "Texiste.h"

Texiste::Texiste() {

}
Texiste::~Texiste() {

}
void Texiste::escribir() {
	ofstream ar;
	cout << "ingrese nombre de archivo: ";
	cin >> m;
	m += ".txt";
	cout << "ingrese algo: ";
	cin >> n;
	ar.open(m, ios::out);
	if (ar.fail()) {
		cout << "Fallo" << endl;
		exit(1);
	}
	ar << n;
	ar.close();
}
