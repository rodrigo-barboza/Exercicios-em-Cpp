#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
	private:
		int tipo;
		int velMax;
		bool arma;
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo (int tp);
		void setVelMax (int vm);
		void setArma (bool ar);
		void imp ();
};

void Veiculo::imp() {
	std::cout << "Tipo veiculo.....: " << tipo   << std::endl;
	std::cout << "Velocidade maxima: " << velMax << std::endl;
	std::cout << "Quantidade rodas.: " << rodas  << std::endl;
	std::cout << "Blindagem........: " << blind  << std::endl;
	std::cout << "Armamento........: " << arma   << std::endl;
}

void Veiculo::setTipo (int tp){
	this->tipo = tp;
}

void Veiculo::setVelMax (int vm){
	this->velMax = vm;
}

void Veiculo::setArma (bool ar){
	this->arma = ar;
}

#endif
