#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;


int main()
{
	int numeros[101],n;
	int suma=0,resta=0,multiplicacion=1,divicion=1,opcion;

	cout<<"\nCalculadora basica"<<endl;
	cout<<"Digite el numero de elementos del arreglo"<<endl;
	cin>>n;

	for(int i=0;i<n;i++){
        cout<<i+1<<". Digite un numero"<<endl;
        cin>>numeros[i];
	}

	cout<<"\nMENU DE OPCIONES"<<endl;
	cout<<"Escriba el numero de la operacion que desea realizar"<<endl;
	cout<<"1.-Suma"<<endl;
	cout<<"2.-Resta"<<endl;
	cout<<"3.-Multipliacion"<<endl;
	cout<<"4.-Divicion"<<endl;
	cin>>opcion;


	if(opcion==1){
        for(int i=0;i<n;i++){
            suma = suma + numeros[i];
        }
        cout<<"La suma es: "<<suma<<endl;
        system("pause");
        return main();
	}
	else if(opcion==2){
        for(int i=0;i<n;i++){
            resta = resta - numeros[i];
        }
        cout<<"La resta es: "<<resta+numeros[1]<<endl;
        return main();
	}
	else if(opcion==3){
        for(int i=0;i<n;i++){
            multiplicacion = multiplicacion * numeros[i];
        }
        cout<<"La multiplicacion es: "<<multiplicacion<<endl;
        return main();
	}
	else if(opcion==4){
        for(int i=0;i<n;i++){
            divicion = divicion / numeros[i];
        }
        cout<<"La divicion es: "<<divicion*numeros[1]<<endl;
        return main();
	}
	else{
        cout<<"La opcion no se encuentra en las opciones"<<endl;
        return main();
	}


	return 0;
}
