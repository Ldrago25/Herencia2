#include <iostream>
#include "Padre.h"
#include "HIja.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Padre **p=new Padre *[2];
	HIja **h=new HIja *[2];
	for(int i=0; i<2; i++){
		h[i]= new HIja(20,30,15,58,true);
		h[i]->MD();
		
	}
	
	
	return 0;
}
