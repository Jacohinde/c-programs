#include<iostream>
#include<conio.h>

using namespace std; 

//Examen: 50%  Tareas: 35%  Asistencia: 15%

int main (){
	float ne, nt, na, examen, tareas, asistencia, CalifTotal = 0;
	
	cout<<"Digite las calificaciones de Examen, Tareas y Asistencia para obtener un total porcentaje de Calificacion Final"<<endl;
	cout<<"Digite la calificacion de Examen: "; cin>>ne;
	cout<<"Digite la calificacion de Tareas: "; cin>>nt;
	cout<<"Digite la calificacion de Asistencia: "; cin>>na;
	
	examen = ne * 5;
	tareas = nt * 3.5;
	asistencia = na * 1.5;
	CalifTotal = examen + tareas + asistencia;
	
	cout<<"\nLa Calificacion Final del estudiante es: "<<CalifTotal<<"%"<<endl;
	
	if (CalifTotal < 51){
		cout<<"El Estudiante esta Reprobado";
	}
	else{
		cout<<"El Estudiante esta Aprobado"<<endl;
		cout<<"FELICIDADES!";
	}
	
    getch();
	return 0;
}


