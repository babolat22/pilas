#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
struct videoJuego{
	char titulo[20];
	char genero[20];
};
void mostrar();  
void registrar(videoJuego &v);  //utiliza a buscaJuego
bool buscaJuego(char titulo[20]);  

int cant=0;  // variables globales
videoJuego juegos[3], juego; //varreglo de estructuras, estructuctura
int main() {
	//pedir datos
	while(cant<3){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(juego.titulo,20,'\n');
		cout<<"Genero: "; cin.getline(juego.genero,20,'\n');
		cout<<"se intenta guardar: "<<juego.titulo<<" : "<<juego.genero;
		registrar(juego);		
		cout<<"\nCantidad: "<<cant<<endl;
	}
	mostrar();
	
	return 0;
}
void mostrar(){  //colocar aquí
    char tipo[20];
	cout<<"\nIngrese genero: "; cin.getline(tipo,20,'\n');
	cout<<"\nMostrando de acuerdo al genero... "<<endl;
	for(int j=0;j<3;j++){
		if(strcmp(tipo,juegos[j].genero)==0)
			cout<<"Nombre: "<<juegos[j].titulo<<endl;
    }
}
void registrar(videoJuego &v){
	//cout<<" llega: "<<!buscaJuego(v.titulo);
	if(!buscaJuego(v.titulo)){ //si no lo encontro
	 	juegos[cant]=v;   // lo guardo
     	cant++; // cuento el juego
    }else 
        cout<<"El juego: "<<v.titulo<<" ya existe."<<endl;
}
bool buscaJuego(char tit[20]){
		bool result = false;
		for(int j=0;j<3;j++){
			if(strcmp(tit,juegos[j].titulo)==0)
				result = true;
		}
		return result;
}
