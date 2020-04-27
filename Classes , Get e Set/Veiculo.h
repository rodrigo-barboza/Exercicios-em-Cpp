#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
	private: 
		std::string nome;
		int vel;
		bool ligado;
	public: 
		int velMax;
		int tipo;
		void setNome   (std::string nome);
		void setVel    (int vel);
		void setLigado (bool ligado);
		std::string getNome ();
		int getVel 	   ();
		bool getLigado ();
};

#endif
