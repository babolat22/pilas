#include <iostream>
#include <stack>

using namespace std;

struct libro{
	char titulo[40];
	char autor[20];
	int paginas;
}lib;

stack<libro> Biblioteca;  // pila de libros

int main(){
	    fflush(stdin);
	    for(int i=0;i<3;i++){
			cout<<"ingrese Titulo ";cin.getline(lib.titulo,6,'\n');
			cout<<"ingrese Autor: ";cin.getline(lib.autor,20,'\n');
			cout<<"ingrese Cant. paginas: "; cin>>lib.paginas;
			Biblioteca.push(lib);
		}
		cout<<"tamaño: "<<Biblioteca.size();
		while (!Biblioteca.empty())  {
			cout<<"\nEl vechiculo del tope: \n";
			cout<<"Titulo: "<<Biblioteca.top().titulo<<endl;
		    cout<<"Autor: "<<Biblioteca.top().autor<<endl;
		    cout<<"Cant. paginas: "<<Biblioteca.top().paginas<<endl;
		    Biblioteca.pop();
		}
  	return 0;
}
