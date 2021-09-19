#include<iostream>
#include<conio.h>
using namespace std;

struct Empleado{
	int cod;
	char nombre[20];
	char puesto[20];
	float bonificacion;
	float salario;	
}e[100];
int main(){
	int n_empleados,mayor=0,menor=999999,posM,posm;
	
	cout<<"Digite el numero de empleados: "; cin>>n_empleados;
	
	for(int i=0;i<n_empleados;i++){
		fflush(stdin); //Vacias el buffer y poder digitar mas valores
		cout<<"Nombre y apellido : "; cin.getline(e[i].nombre,20,'\n');
		cout<<"codigo: "; cin>>e[i].cod;
		cout<<"puesto: "; cin>>e[i].puesto;
		cout<<"Sueldo base: "; cin>>e[i].salario;
		cout<<"bonificacion: "; cin>>e[i].bonificacion;

		
		//Empleado con mayor salario
		if(e[i].salario > mayor){
			mayor = e[i].salario;
			posM = i;
		}
		//Empleado con menor salario
		if(e[i].salario < menor){
			menor  = e[i].salario;
			posm = i;
		}		
		cout<<"\n";
	}


	system("PAUSE");
	
	cout<<"\nEmpleado destacado: "<<endl;
	cout<<"Codigo: "<<e[posM].cod<<endl;
	cout<<"Nombre: "<<e[posM].nombre<<endl;
	cout<<"puesto: "<<e[posM].puesto<<endl;
	cout<<"Salario: "<<e[posM].salario<<endl;
	cout<<"bonificacion: "<<e[posM].bonificacion<<endl;
	cout<<"total del salario: "<<e[posM].bonificacion + e[posM].salario <<endl;

	cout<<"\nEmpleado destacado: "<<endl;
	cout<<"Codigo: "<<e[posM].cod<<endl;
	cout<<"Nombre: "<<e[posM].nombre<<endl;
	cout<<"puesto: "<<e[posM].puesto<<endl;
	cout<<"Salario: "<<e[posM].salario<<endl;
	cout<<"bonificacion: "<<e[posM].bonificacion<<endl;
	cout<<"total del salario: "<<e[posM].bonificacion + e[posM].salario <<endl;
	
	getch();
	return 0;
}
