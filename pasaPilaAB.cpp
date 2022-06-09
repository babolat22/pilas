#include <iostream>
#include <stack>
using namespace std;

void cargaPila(stack <int> &pilaA);
void pasaPila(stack <int> &pilaA, stack <int> &pilaB);

stack <int> pilaA,pilaB,pilaC,aux1;
int main() {
	
	cargaPila(pilaA);
	pasaPila(pilaA, pilaB);

	return 0;
}
void cargaPila(stack <int> &pilaA){
	int n;
	cout<<"CARGAR LA PILA "<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<"ingrese un numero: ";
     	cin>>n;
    	pilaA.push(n);
    }
}

void pasaPila(stack <int> &pilaA, stack <int> &pilaB){
int i=0;
while(!pilaA.empty()){
	cout<<"Se pasa un elemento de pilaA a pilaB: es el "<<pilaA.top()<<endl;
	pilaB.push(pilaA.top());
	pilaA.pop();
	cout<<"la pila b tiene: "<<pilaB.top()<<endl;
    i++;
}



}
