//contieneE, que recibe un entero “X” y determina si está en la pilaA, todos los elementos
//deben quedar nuevamente en A 
#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> pilaA, aux;
	bool contiene = false;
	int elem, valor, i=0;
	cout<<"ingrese un elemento";
	for(int x=0; x<3; x++){
		cin>>elem;
		pilaA.push(elem);
    }
    cout<<"ingrese un elemento a buscar: ";
    cin>>valor;
    while(!(valor==pilaA.top())&&(i<pilaA.size())){
		aux.push(pilaA.top());
		pilaA.pop();
		i++;
	}
	if(valor==pilaA.top()){
		cout<<"encontrado en posicion: "<<i<<" el valor "<<pilaA.top()<<endl;
	}else{
		cout<<"el valor no fue encontrado";
	}
	for(int x=0; x<aux.size(); x++){
		pilaA.push(aux.top());
		aux.pop();
    
	}
	

	return 0;
}
