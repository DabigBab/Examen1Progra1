#include "Curso.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos,curso; 
	int codigo,nota1,nota2,nota3;
	int op;
	double prom;
	
	do{
		system("cls");
		cout<<"Ingrese codigo del estudiante: ";
		cin>>codigo;
		cout<<"Ingrese Nombre del estudiante: ";
		cin>>nombres;
		cout<<"Ingrese Apellido del estudiante: ";
		cin>>apellidos;
		cout<<"Ingrese el nombre del curso: ";
		cin>>curso;
		cout<<"Ingrese la nota 1: ";
		cin>>nota1;
		cout<<"Ingrese la nota 2: ";
		cin>>nota2;
		cout<<"Ingrese la nota 3: ";
		cin>>nota3;
		
		prom=(nota1+nota2+nota3)/3;
		
		
		if(prom>60)
		
		{
			cout<<"El estudiante aprobro el curso"<<endl;
		}
		
		
		else
		{
			cout<<"El estudiante reprobo el curso"<<endl;
		}
		
		Curso obj= Curso(nombres,apellidos,codigo,curso,nota1,nota2,nota3);
		obj.mostrar();
		cout<<"¿Desea ingresar otro estudiante? (1 para si/2 para no)";
		cin>>op;
		}
		while(op != 2);
		
		system("pause");
};
