//Samuel Omar Taya Yana
#include <iostream>
using namespace std;
bool bisiesto(int anio)
{
	if( anio%4==0)
		if(anio%100==0)
			if(anio%400==0)
				return true;
			else
				return false;
		else
			return true;
	else
		return false;
}

int main() {
	
	int anio;
	cout << "Ingrese el a�o: ";
	cin >> anio;
	
	if (bisiesto(anio))
		cout<<"Es un a�o bisiesto";
	else
		cout<<"NO es un a�o bisiesto";
	return 0;
}

