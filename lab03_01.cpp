//Samuel Omar Taya Yana
#include <iostream>
using namespace std;
int potencia(int a, int b)
{
	int p=1;
	for(int i=0; i<b;i++)
		p=p*a;
	return p;
}

int main() {
	int a,b;
	cout<<"Ingrese el numero: ";
	cin>>a;
	cout<<"Ingrese el exponente: ";
	cin>>b;
	cout<<"La potencia es: "<<potencia(a,b);
	return 0;
}

