#include "HIja.h"

HIja::HIja()
{
	a=30;
	b=40;
	
	
}
	HIja::HIja(int _a, int _b, int _c, int _d, bool _r):Padre(_c,_d, _r){
		a=_a;
		b=_b;
		
		
	}
	
	
	void HIja::MD(){
			cout<<endl<<"Padre And Hija"<<endl;
		cout<<endl<<"____________"<<endl;
		cout<<endl<<"A: "<<a<<endl;
		cout<<endl<<"B: "<<b<<endl;
		
		cout<<endl<<"C: "<<c<<endl;
		cout<<endl<<"D: "<<d<<endl;
		cout<<endl<<"Correcto? "<<((r)? "Si": "No")<<endl;
		
		
		
		
	}
