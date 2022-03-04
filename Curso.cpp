#include "Estudiante.cpp"
#include <iostream>
using namespace std;
class Curso : Estudiante {
	//atributos
	private : string curso;
			  int nota1,nota2,nota3;
			  
		//Constructor
		public :
		Curso (){
		}
		
		Curso(string nom,string ape,int cod,string c,int n1,int n2,int n3) : Estudiante(nom,ape,cod){
			curso=c;
			nota1=n1;
			nota2=n2;
			nota3=n3;
		}
		//metodo
		void mostrar(){
			cout<<"-------------------------------"<<endl;
			cout<<curso<<","<<nombres<<","<<apellidos<<","<<curso<<","<<nota1<<","<<nota2<<","<<nota3<<endl;
			
		}
		
};