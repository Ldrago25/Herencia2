#include "Padre.h"

Padre::Padre()
{

	c=10;
	d=20;
	r=true;
	
}

	Padre::Padre(int _c, int _d, bool _r){

		c=_c;
		d=_d;
		r=_r;
	}
	
	
	void Padre::MD(){
		cout<<endl<<"Padre"<<endl;
		cout<<endl<<"____________"<<endl;
		cout<<endl<<"C: "<<c<<endl;
		cout<<endl<<"D: "<<d<<endl;
		cout<<endl<<"Correcto? "<<((r)? "Si": "No")<<endl;
		
		
		
	}
