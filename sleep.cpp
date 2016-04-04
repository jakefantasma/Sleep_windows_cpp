/*funciones nuevas para windows*/
/*carlos caballeros by:jf */
/*agregado de funcon sleep*/
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
	if ( arg_c == 1 ){
		cout <<"indique los segundos a esperar !"<<endl;
	}else {

		Esperar(arg_v[1]);
	}
	return 0;
}