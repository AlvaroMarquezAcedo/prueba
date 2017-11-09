#include <iostream>
using namespace std;
int main() {
	int x, x1, x2, y, y1, y2;
	cout <<"Dime dos numeros enteros para saber la porteria:  " 		<<endl;
	cin >>x, cin >>y;
	cout <<"Dime otros dos numeros enteros para saber la porteria:  " 		<<endl;
	cin >>x1, cin >>y1;
	cout <<"Dime dos valores enteros para saber tu tiro:  " <<endl;
	cin >>x2, cin >>y2;
	if ((x2 < x) && (y2 > y)) 
	cout <<"El tiro ha ido fuera hacia la izquierda alto" 			<<endl;		
		else if ((x2 < x) && (y2 < y))
		cout <<"El tiro ha ido fuera hacia el lado izquierdo" <<endl;
		else if ((x2 > x1) && (y2 > y))
		cout <<"El tiro ha salido fuera en el lado derecho hacia 			arriba" <<endl;
		else if ((x2 > x1) && (y2 < y))
		cout <<"El tiro ha salido fuera hacia el lado 			derecho"<<endl; 
		else if ((x2 > x) && (x2 < x1) && (y2 == y))
		cout <<"El tiro dio en el larguero" <<endl;
		else if ((x2 > x) && (x2 < x1) && (y2 < y) && (y2 > y1))
		cout <<"El tiro ha sido gol" <<endl;
		else if (x2 == x)
		cout <<"El tiro ha ido al palo izquierdo" <<endl; 
		else if ((x2 == x) && (y2 ==y))
		cout <<"El tiro ha ido a la escuadra izquierda" <<endl; 
		else if ((x2 == x1) && (y2 != y))
		cout <<"El tiro ha ido al palo derecho" <<endl; 
		else if ((x2 == x1) && (y2 == y))
		cout <<"El tiro ha ido a la escuadra derecha" <<endl; 
		else if (y2 < y1)
		cout <<"El tiro ha sido demasiado flojo" <<endl;
}
