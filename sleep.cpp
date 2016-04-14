/*funciones nuevas para windows*/
/*carlos caballeros by:jf */
/*agregado de funcon sleep*/
/*fecha 03/04/16*/
/*hora 10:42 pm*/
#include <iostream>
#include <windows.h>
#include <sstream>
using namespace std;
float x;

void Esperar(string r){
	stringstream s ( stringstream::in | stringstream::out );
	s << r;
	s >> x;
	float y=x*1000;
	Sleep(y);
}
int main(int arg_c, char **arg_v){
	string r;
	if ( arg_c == 1 ){
		cout <<"proporcionar valores para los parametros siguientes:"<<endl;
		cout <<"Segundos: ";
		cin >> r;
		cout <<""<<endl;
		Esperar(r);
	}else {

		Esperar(arg_v[1]);
	}
	return 0;
}
/*ultima modificacion del codigo el dia */
/*13/04/16*/
/*10:17 pm*/