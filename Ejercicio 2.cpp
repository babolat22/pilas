#include <iostream>
#include<conio.h>
using namespace std;
struct Promedio {
float nota1;
float nota2;
float nota3;
};
struct Alumno {
char nombre[20];
int edad;
char sexo[10];
Promedio promedio;
float promedioTotal;
};
int main ()
{ float promedio=0;
float mejorPromedio=0;
int indice;
int i=0;
Alumno alumno1[9];
do {
cout<<"--- INGRESE DATOS DEL ALUMNO---"<<endl;
cout<<" Ingrese su nombre:"<<endl;
cin.getline(alumno1[i].nombre,20,'\n');
cout <<"Ingrese su sexo:"<<endl;
cin.getline(alumno1[i].sexo,10,'\n');
cout<<"Ingrese edad:"<<endl;
cin>>alumno1[i].edad;
system("cls");
cout<< "\n --- INGRESE NOTAS DEL ALUMNO ---\n"<<endl;
cout<< "Ingrese nota 1 "<<endl;
cin>>alumno1[i].promedio.nota1;
cout<<"Ingrese nota 2"<<endl;
cin>>alumno1[i].promedio.nota2;
cout<<"Ingrese nota 3"<<endl;
cin>>alumno1[i].promedio.nota3;
system("cls");
alumno1[i].promedioTotal=((alumno1[i].promedio.nota1)+(alumno1[i].promedio.nota2)+(alumno1[i].promedio.nota3))/3;
i++;
} while (i<10);
for ( int i=0;i<10;i++)
{
if (mejorPromedio < (alumno1[i].promedioTotal))
{
mejorPromedio=alumno1[i].promedioTotal;
indice=i; }
}
cout<< "EL MEJOR PROMEDIO ES DEL ALUMNO:"<<endl;
cout<<" NOMBRE:"<< alumno1[indice].nombre<<endl;
cout<<" SEXO: "<<alumno1[indice].sexo<<endl;
cout<<" EDAD: "<<alumno1[indice].edad<<endl;
cout<<" PROMEDIO:"<<alumno1[indice].promedioTotal<<endl;
getch();
return 0;}

