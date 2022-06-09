#include<iostream>
#include<conio.h>

using namespace std;

struct empleado{
	int legajo;
	char sector;   //A B C
	char sexo;
	float vtaDiaria;
	float vtaSemanal;
};
struct sucursal{
	empleado emp[2];
	float totSemana;
	float totalVend;
}sucursal[3];
void cargarVenta(int suc, int e, float monto){
	sucursal[suc].emp[e].vtaDiaria += monto;
}
void totalizarVentas(int suc){
    for(int i=0;i<2;i++)	{
   	  sucursal[suc].emp[i].vtaSemanal += sucursal[suc].emp[i].vtaDiaria;
	  sucursal[suc].emp[i].vtaSemanal=0; //reset
	}
}
void totalSemanalSucursal(){
	for(int s=0;s<3;s++)
	   for(int i=0;i<2;i++)
		 sucursal[s].totSemana += sucursal[s].emp[i].vtaSemanal;
}
void totalSucursal(int suc){
	sucursal[suc].totalVend += sucursal[suc].totSemana;
	sucursal[suc].totSemana=0;   //reset
}

int main(){
	
	cout<<"\nDigite datos de vendedores:"<<endl;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
		//Pedimos las horas en cada etapa
		cout<<". Legajo: "; cin>>sucursal[i].emp[j].legajo;
		cout<<". Sector A|B|C?: "; cin>>sucursal[i].emp[j].sector;
		cout<<". Sexo m/f ? "; cin>>sucursal[i].emp[j].sexo;
		sucursal[i].emp[j].vtaDiaria=0;
		sucursal[i].emp[j].vtaSemanal=100;
		}
	}
	cargarVenta(0,0,200.3);
	cargarVenta(0,1,350.6);
	totalizarVentas(0);
	//Por ultimo mostramos 
	cout<<"\nEMPLEADOS sucursal 0: "<<endl;
	for(int i=0;i<2;i++){
		cout<<"Lejajo: "<<sucursal[0].emp[i].legajo<<endl;
		cout<<"Sector: "<<sucursal[0].emp[i].sector<<endl;
		cout<<"Sexo: "<<sucursal[0].emp[i].sexo<<endl;
		cout<<"VentaDiaria: "<<sucursal[0].emp[i].vtaDiaria<<endl;
		cout<<"Venta Semanal: "<<sucursal[0].emp[i].vtaSemanal<<endl;
    }
	totalSemanalSucursal();
	cout<<"Total semana sucursal: "<<sucursal[0].totSemana<<endl;
	getch();
	return 0;
}

