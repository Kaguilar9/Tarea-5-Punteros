#include <iostream>

using namespace std;
//punteros con asignacion de memoria dinamica
// operador new = sirve para asignar un espacio de memoria
// operador delete [] =  sirve para liberar memoria 
//Dev c++ no tiene una funcion garbage colect = recolector de basura, se debe eliminar. 
main(){
	/* int edad, *p_edad;
	cout << "Ingresar edad: ";
	cin >> *p_edad;
	cout << *p_edad << endl; // aquí no está mostando nada porque quien reserva la palabra es edad
	// un puntero no puede almacenar palabras 
	
	
	// Para que pueda mostrar la palabra reserveda o almacenada se debe de hacer de la siguiente manera
	int edad, *p_edad; //Auí el puntero ya puede mostrar la plabra porque ya tiene direccion de memoria a edad
	p_edad = &edad;
	cout << "Ingresar edad: ";
	cin >> edad;
	cout << *p_edad << endl;
	
	if(*p_edad > 18){
		cout << "Mayor de edad" << endl;
	}else{
		cout << "Eres menor de edad!" << endl;
	}
	//----------------------------------------------------------------------------------------
	
	int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	do{
		cout << "Ingrese nota: ";
		cin >> notas[total];
		total++;
		cout << "Desea ingresar otro valor? (s/n)";
		cin >> res;
	}while(res == 's' || res == 'S');
	
	cout << "-----------Mostrar notas-----------" << endl;
	for(int i = 0; i<total; i++){
		cout << "Nota (" << i << "): " << *p_notas << endl;
		p_notas++; //esto ayuda a que avance a la siguiente direccion de memoria
	}}
	//----------------------------------------------------------------------------------------
	//forma para hacerlo mendiante punteros y no arreglos
	int total = 0, *p_notas; //siempre que usamos punteros pero como estamos usando operador new no es necesario
	p_notas = new int[total];
	char res;
	
	do{
		cout << "Ingrese nota: ";
		cin >> p_notas[total];
		total++;
		cout << "Desea ingresar otro valor? (s/n)";
		cin >> res;
	}while(res == 's' || res == 'S');
	
	cout << "-----------Mostrar notas-----------" << endl;
	for(int i = 0; i<total; i++){
		cout << "Nota (" << i << "): " << *p_notas << endl;
		p_notas++; //esto ayuda a que avance a la siguiente direccion de memoria
	}
	delete[] p_notas; // esto es una buena practica para no despedicar recursos de la maquina
	*/
	//----------------------------------------------------------------------------------------
	
	//podemos trabajar punteros bidimencionales y unidimensional
	int fil = 0, col  = 0, **pm_notas; //Asteriscos: el primero indica fila y el segundo indica la columna
	cout << "Ingrese las Estudiantes: ";
	cin >> fil;
	cout << "Ingrese la cantidad de las Notas por estudiante: ";
	cin >> col;
	
	//Cómo puedo instanciarlo de forma dinámica?
	pm_notas = new int*[fil]; //Ojo, se debe colocar el asterico para indicar que es la fila
	for(int i=0; i<fil; i++){
		pm_notas[i] = new int[col]; //aquí se está agregando de forma dinamicas
	}
	for(int i=0; i<fil; i++){
		cout << "______________Estudiante "<< i << "______________"<<  endl;
		for(int ii=0; ii<col; ii++){
			cout<< "Nota: " << ii << " : ";
			cin >>*(*(pm_notas+i)+ii);
				
		}cout << "________________________________________"<< endl;
		
	}
	cout << "___________Mostrar notas___________"<< endl;
	for(int i=0; i<fil; i++){
		
		for(int ii=0; ii<col; ii++){
			cout << *(*(pm_notas+i)+ii) <<endl;
		}
	cout << "_______________________________________" << endl;	
	}
	for(int i=0; i<fil; i++){
		delete[] pm_notas[i];
	}
	delete[] pm_notas;
	system("pause");
}
