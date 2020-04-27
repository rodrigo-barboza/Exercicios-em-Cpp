#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED
#include "Veiculo.h"

// Moto ("filho") herda a classe "pai" Veiculo
class Moto:public Veiculo{
		public:
			Moto();
};

Moto::Moto(){
	vel = 0;
	blind = 0;
	rodas = 2;
	setTipo(2);
	setVelMax (300);
	setArma (true);
}

#endif
