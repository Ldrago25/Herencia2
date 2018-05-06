#ifndef HIJA_H
#define HIJA_H

#include "Padre.h"

class HIja : public Padre
{
	private:
		int a;
		int b;
	public:
		HIja(int, int , int , int ,bool);
		HIja();
		void MD();
	protected:
};

#endif
