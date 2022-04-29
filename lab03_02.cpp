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
	cout << "Ingrese el año: ";
	cin >> anio;
	
	if (bisiesto(anio))
		cout<<"Es un año bisiesto";
	else
		cout<<"NO es un año bisiesto";
	return 0;
}

