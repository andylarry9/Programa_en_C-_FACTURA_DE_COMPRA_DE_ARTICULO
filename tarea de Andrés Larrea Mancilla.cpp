#include <iostream>

using namespace std;
/* Implementar un algoritmo, en C++, que permita emitir la factura, correspondiente a la compra de un artículo 
determinado del que se adquieren una o varias unidades. El IVA (Impuesto de Valor Añadido) a aplicar es del 12%. 
Los datos de la factura corresponden a la cantidad de unidades del artículo, precio de cada unidad, precio neto sin IVA, 
el precio total de IVA 12% y el precio final de compra. 
*/

int main(int argc, char** argv) 
{
setlocale (LC_ALL, "spanish");

// Esquema General de Ejecucion de Algoritmo
	
	//1.Declaracion de las variables
	//Datos de entrada
float cantidad, precio;

//Datos de salida
float subtotal,iva,total;

//Datos auxiliares (opcional)
const float IVA = 0.12;

//2.Entrada de los datos
cout << "ingrese la cantidad" <<endl;
cin >> cantidad;
cout << "ingrese el precio" <<endl;
cin >> precio;

//3.Procesamiento de los datos
	subtotal = cantidad * precio;
	iva = subtotal * 0.12;
	total = subtotal + iva;
	
	
	//4.Mostrar los resultados obtenidos
	cout << "precio del subtotal es" << subtotal <<endl;
	cout << "el iva del subtotal es" << iva <<endl;
	cout << "el total es" << total <<endl;
	
	
	
	system ("pause");
	
	return 0;
}
