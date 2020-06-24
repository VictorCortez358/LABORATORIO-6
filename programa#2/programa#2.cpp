#include "iostream"
using namespace std;
int main(void)
{
    int arreglo[10];
    int n,i,cont=0;
	cout<<"VERIFICAR CUANTAS VECES SE REPITE UN NUMERO ENTERO INGRESADO DENTRO DEL ARREGLO"<<endl<<endl;

		for (i=0;i<10;i++){// se coloca la cantidad de numeros que se encontraran dentro del arreglo.
		cout<<"Ingrese un numero entero: ";
        cin>>arreglo[i];// se le pide al usuario que ingrese numero entero
	    }
		cout<<"Ingrese el numero que desea saber cuantas veces se repite: ";
		cin>>n;
		for (i=0;i<10;i++){
		if (n==arreglo[i]){//instruccion que nos servira para contabilizar la cantidad de veces que se repite un numero
			cont++;         
		}
	}
    cout<<"El numero "<<n<<" se repite "<<cont<<" veces "<<endl;
	cout<<endl;//Se coloca en pantalla la cantidad de veces que se repitio el numero ingresado por el usuario.
    return 0;

}