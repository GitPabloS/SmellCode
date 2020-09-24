#include "AdministradorArchivos.h"

AdministradorArchivos::AdministradorArchivos() {

}
AdministradorArchivos::~AdministradorArchivos() {

}
//Metodo grande escribir 1
void AdministradorArchivos::NombrarArchivo()
{
	cout << "Ingrese nombre de archivo: ";
	cin >> filename;
	filename += ".txt";
}
void AdministradorArchivos::CrearArchivo()
{
	NombrarArchivo();//codigo duplicado 2
	archivo.open(filename, ios::out);
	RevisarFallo("write"); //Codigo duplicado 2
 	IngresarTexto();//Codigo duplicado 2
	archivo.close();
}
//Metodo grande escribir 
void AdministradorArchivos::LeerArchivo()
{
	cout << "Buscar archivo y leerlo"<<endl;
	NombrarArchivo();
	archivoBuscado.open(filename, ios::in);
	RevisarFallo("read");
	MostrarTexto();
	archivoBuscado.close();
}
void AdministradorArchivos::MostrarTexto()
{
	if (!archivoBuscado.eof()) {
		getline(archivoBuscado, texto);
		cout << texto << endl;
	}
}
void AdministradorArchivos::IngresarTexto()
{
	cout << "ingrese algo: ";
	cin >> texto;
	archivo << texto;
	
}
void AdministradorArchivos::RevisarFallo(string tipo)//codigo duplicado
{
	if (tipo == "write")
	{
		if (archivo.fail()) {
			MandarError();
		}
	}
	else
	{
		if (archivoBuscado.fail()) {
			MandarError();
		}
	}
}
void AdministradorArchivos::MandarError()//codigo duplicado
{
	cout << "Fallo" << endl;
	exit(1);
}



/*cout << "Ingrese el texto: (para salir escriba -1)" << endl;
	for (texto; getline(std::cin, texto);) {
		if (texto != "-1")
		{
			archivo << texto;
			archivo << endl;
		}
		else
			break;
	}*/
