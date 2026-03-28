#include <iostream>

using namespace std;

main(){
	int edad = 25, *p_edad;
	p_edad = &edad;
	
	cout << "Variable Edad: " << edad << endl;
	cout << "Puntero edad: " << *p_edad << endl;
	
	cout << "--------------Cambiar valores-------------" << endl;
	*p_edad = 40;
	
	cout << "Variable Edad: " << edad << endl;
	cout << "Puntero edad: " << *p_edad << endl;
	
	cout << "--------------Otra edad a *p_edad valores-------------" << endl;
	int edad2 = 100;
	p_edad = &edad2;
	edad = 400;
	
	cout << "Variable Edad: " << edad << endl;
	cout << "Puntero edad: " << *p_edad << endl;
	cout << "Variable edad2: " << edad2 << endl;
	
	system ("pause");
}
