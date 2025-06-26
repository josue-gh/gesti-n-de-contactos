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
	int hacer, cant=0 ;
	
	contactoEmail persona[maximo];
	
	//mostramos el menu de entrada
	cout<<"menu: "<<endl;
	cout<<endl;
	cout<<"agregar nuevo contacto = 1"<<endl;
	cout<<"aliminar un contacto = 2"<<endl;
	
	//pedimos lo que desea hacer
	cout<<"que deseas hacer: "<<endl;
	cin >> hacer;
	//aplicando el cin.ignore para limpiar el buffer
	cin.ignore();
	//comparamos la respuesta
	if (hacer==1){
		//designamos valor a la variables i
		int i=cant;
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
		cout<<"ingrese el telefono de las persona"<<endl;
		cin>> persona[i].telefono;
		cout<<endl;
		cout<<"ingrese el email de la persona"<<endl;
		cin>> persona[i].email;
		cout<<endl;
		cout<<"ingrese la nacionalidad de la personas"<<endl;
		cin>> persona[i].nacionalidad;
		
		cant++;
	}else if(hacer==2){
		
		cout<<"lista de contactos: "<<endl;
		cout<<endl;
		//realizamos un bucle para mostrar los contactos:
		for(int i=0; i<cant; i++){
			cout<<"contacto "<<i+1<<" :"<<persona[i].nombres<<endl;
		}
		
		int eliminarCont;
		//condicion para saber si hay contactos
		if(cant>0){
		//ingresamos el indice del contacto a eliminar
		cout<<"que contacto desea eliminar(ingrese su indice: 1,2,3.....)"<<endl;
		cin>>eliminarCont;
		//retroceder el numeros para que vaya de acuerdo al arreglo
		eliminarCont--;
		//condicion para eliminar contacto
		if(eliminarCont>=0 and eliminarCont<cant){
			//bucle para recorrer los contactos
			for(int i=eliminarCont; i<cant-1; i++){
			persona[i].nombres=persona[i+1].nombres;
			persona[i].sexo=persona[i+1].sexo;
			persona[i].edad=persona[i+1].edad;
			persona[i].telefono=persona[i+1].telefono;
			persona[i].email=persona[i+1].email;
			persona[i].nacionalidad=persona[i+1].nacionalidad;
		    }
		    //disminuir la cantidad de contactos
		    cant--;
		}
		cout<<"eliminaste al contacto "<<eliminarCont<<" :"<<persona[eliminarCont].nombres<<endl;
	    }else{
	    	cout<<"no hay contactos "<<endl;
		}
	}
	
	return 0;
}