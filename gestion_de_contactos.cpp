#include<iostream>
#include<string>

using namespace std; 

struct contactoEmail{
	
	string nombres;
	char sexo;
	int edad;
	string telefono;
	string email;
	string nacionalidad;
};

int main(){
	
	const int maximo=50;
	int hacer, i=0 ;
	
	contactoEmail persona[50];
	
	//mostramos el menu de entrada
	cout<<"menu: "<<endl;
	cout<<endl;
	cout<<"agregar nuevo contacto = 1"<<endl;
	
	
	//pedimos lo que desea hacer
	cout<<"que deseas hacer: "<<endl;
	cin >> hacer;
	
	cin.ignore();
	//comparamos la respuesta
	if (hacer==1){
		
		//agregando datos de los contactos
		cout<<"ingresa el nombre de la persona "<<endl;
		getline(cin, persona[i].nombres);
		cout<<endl;
		cout<<"ingrese el sexo de las persona(M-F)"<<"\n";
		cin >> persona[i].sexo ;
		cout<<endl;
		cout<<"ingrese la edad de la persona"<<endl;
		cin>> persona[i].edad;
		cout<<endl;
		cout<<"ingrese el numero de las persona"<<endl;
		cin>> persona[i].telefono;
		cout<<endl;
		cout<<"ingrese el email de la persona"<<endl;
		cin>> persona[i].email;
		cout<<endl;
		cout<<"ingrese la nacionalidad de la personas"<<endl;
		cin>> persona[i].nacionalidad;
		
		i++;
	}
	return 0;
}