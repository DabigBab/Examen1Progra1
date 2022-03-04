#include <iostream>
using namespace std;
class Estudiante {
	//atributos
	protected : string nombres,apellidos;
				int codigo;
	//Constructo
	protected :
				Estudiante(){
				}
				Estudiante(string nom,string ape,int cod){
					nombres=nom;
					apellidos=ape;
					codigo=cod;
				}
		//metodo
		void mostrar();
};