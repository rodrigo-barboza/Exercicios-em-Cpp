#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
	public:
		int vel=0;
		int velMax;
		std::string tipo;
		Aviao (int tp);
		void imprimir ();
	private: 
};

// 1 = jato, 2 = monomotor, 3 = planador
Aviao::Aviao(int tp){
	if (tp == 1){
		tipo = "jato";
		velMax = 800;
	} else if (tp == 2){
		tipo = "monomotor";
		velMax = 350;
	} else if (tp == 3) {
		tipo = "planador";
		velMax = 180;
	}
} 

void Aviao::imprimir (){
	std::cout << "Tipo:  			" << tipo 	<< std::endl;
	std::cout << "Velocidade maxima: 	" << velMax << std::endl;
	std::cout << "Velocidade atual: 	" << vel 	<< std::endl;
}

#endif
