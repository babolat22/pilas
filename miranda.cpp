#include<iostream>
using namespace std;
int pediMac[93];
int nroPedido,indice= -1;

void carga(int pediMac[]){
	for(int i=43; i<50;i++){
		cout<<"Ingrese el numero de su Pedido: "<<endl;
		cin>>pediMac[i];
	}
}
void busca(int pediMac[]){
	cout<<"Ingrese su Numero Para Retirar su pedido: "<<endl;
	cin>>nroPedido;
	for(int i; i<93; i++){
		if(nroPedido==pediMac[i]){
			indice=i;
		}
	} 
	if(indice==-1){
		cout<<"No existe el pedido"<<endl;
	}else{
		cout<<"Su pedido esta en la posicion: "<<indice;
	}
}
int main(){
	carga(pediMac);
	fflush(stdin);
	//cout<<endl;
	busca(pediMac);
	return 0;
}
