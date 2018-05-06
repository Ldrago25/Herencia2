#ifndef PADRE_H
#define PADRE_H
#include <iostream>
#include <string.h>
using namespace std;
class Padre
{
	
	private:
	
	public:
		char n[40];
		int c;
		int d;
		bool r;
		int get( );
		void set();
		Padre(int , int , bool);
		Padre();
		void MD();
	protected:
};

#endif
