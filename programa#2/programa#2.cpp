#include "iostream"
using namespace std;
int main(void)
{
    int arreglo[10]={2,3,4,5,5,4,6,1,3,5};
    int n,i,cont=0;
	cout<<"VERIFICAR CUANTAS VECES SE REPITE UN NUMERO ENTERO INGRESADO DENTRO DEL ARREGLO"<<endl<<endl;
    cout<<"Ingrese un numero entero: ";
    cin>>n;// se le pide al usuario que ingrese numero entero

		for (i=0;i<10;i++){// se coloca la cantidad de numeros que se encuentra dentro del arreglo.
		if (n==arreglo[i]){//instruccion que no servira para contabilizar la cantidad de veces que se repite un numero
			cont++;         
		}
	}
cout<<"El numero "<<n<<" se repite "<<cont<<" veces "<<endl;
	cout<<endl;//Se coloca en pantalla la cantidad de veces que se repitio el numero ingresado por el usuario.
    return 0;

}