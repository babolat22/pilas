#include<iostream>
using namespace std;
int main(){
char letras[] = {'O','R','V'};
int nro[] = {'1','7','9'};
char patente[6];

for(int i=0;i<3;i++){
 patente[i]=letras[i];
 }
 for(int i=3;i<6;i++){
 patente[i]=nro[i-3];
 }
 for(int i=0;i<6;i++){
 cout<<patente[i]<<endl;
 }
return 0;
}
