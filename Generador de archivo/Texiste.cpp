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
	
	ar.open(m, ios::app);
	if (ar.fail()==true) {
		cout << "Fallo" << endl;
		exit(1);
	}
	cout << "ingrese algo: ";
	cin >> n;
	ar << n;
	ar.close();
	
	ifstream er;
	cout << "ingrese nombre de archivo que busca: ";
	cin >> m;
	m += ".txt";
	er.open(m, ios::in);
	if (er.fail() == true) {
		cout << "Fallo" << endl;
		exit(1);
	}
	if (!er.eof()) {
		getline(er, a);
		cout << a << endl;
	}
	er.close();

	ofstream ir;
	cout << "ingrese nombre de archivo: ";
	cin >> o;
	o += ".txt";
	
	ir.open(o, ios::app);
	if (ir.fail() == true) {
		cout << "Fallo" << endl;
		exit(1);
	}
	cout << "ingrese algo: ";
	cin >> p; 
	ir << p;
	ir.close();
}
