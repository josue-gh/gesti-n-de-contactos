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
	
	int hacer;
	//mostramos el menu de entrada
	cout<<"menu: "<<endl;
	cout<<endl;
	cout<<"agregar nuevo contacto = 1"<<endl;
	
	
	//pedimos lo que desea hacer
	cout<<"que deseas hacer: "<<endl;
	cin >> hacer;
	
	//comparamos la respuesta
	if (hacer==1){
		
	}
	return 0;
}