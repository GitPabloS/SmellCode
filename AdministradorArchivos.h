#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

class AdministradorArchivos //nombre de clase sin sentido 3 //clase perezosa 5 solo tenia una funcion
{
private:
	string texto;//identificadores excesivamente cortos 4
	string filename; //identificadores excesivamente cortos
	ofstream archivo;//identificadores excesivamente cortos
	ifstream archivoBuscado;//identificadores excesivamente cortos
public:
	AdministradorArchivos();
	~AdministradorArchivos();
	void CrearArchivo();
	void LeerArchivo();
	void MostrarTexto();
	void RevisarFallo(string tipo);
	void MandarError();
	void IngresarTexto();//factorizacion de CrearArchivo
	void NombrarArchivo();//factorizacion de CrearArchivo
};

