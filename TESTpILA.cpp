//A continuaci�n se muestra un ejemplo de implementaci�n de Stack para comprender mejor las operaciones.
#include <iostream>
#include <stack>
using namespace std;
void imprimirPila(stack <int> &stk)
{
    while (!stk.empty())  {   // no este vac�a
         cout << '\t' << stk.top();   //mostrar
         stk.pop();     // sacar y bajar puntero
	}
    cout << '\n';
}
int main () {
   stack <int> pila, pila2;
   //stack <tipo> nombre;
   pila.push(1);
   pila.push(3);
   pila.push(5);
   pila.push(7);
   pila.push(9);
  
   cout << "La Pila es : ";
   imprimirPila(pila);    // invocaci�n
  
   cout << "\nTama�o de stack: " << pila.size();    // ver tama�o
   cout << "\nTope de stack: " << pila.top();      // veo elemento superior (tope)
   pila2.push(pila.top()); 
   pila.pop();     pila2.push(pila.top());                // sacar elemento
   cout << "\n\nDespues de pila.pop() : ";   
   imprimirPila(pila);      // invocaci�n
   cout<<"\nOtro pop(): ";
   pila.pop();
   imprimirPila(pila);     // invocaci�n
   cout << "La Pila2 tiene : ";
   imprimirPila(pila2); 
   return 0;
}

