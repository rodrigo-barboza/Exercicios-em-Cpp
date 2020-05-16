#include <iostream>

using namespace std;

class Veiculo {
	private:
		const char* nome;
		const char* cor;
	public:
		int velMax;
		int rodas;
		void setNome (const char* nome){
			this->nome = nome;
		}
		const char* getNome (){
			return nome;
		}
		void setCor (const char* cor){
			this->cor = cor;
		}
		const char* getCor (){
			return cor;
		}
		// funcao sera sobreescrita, indicado pelo 'virtual'
		virtual void imp(){
			cout << "Nome:     " << nome << endl;
			cout << "Cor:      " << cor << endl;
			cout << "Rodas:    " << rodas << endl;
			cout << "Vel.Max:  " << velMax << endl << endl;
		}	
};

class Carro: public Veiculo{
	public:
		Carro(){
			velMax=160;
			rodas=4;
			setNome("Carro");
			setCor("Branco");
		}
};

class Moto: public Veiculo{
	public:
		Moto(){
			velMax=200;
			rodas=2;
			setNome("Moto");
			setCor("Preto");
		}
};

class Militar: public Veiculo{
	public:
		int municao;
		bool armamento;
		Militar(bool arma, int mo):armamento(arma), municao(mo){
			velMax=150;
			rodas=6;
			setNome("Roda");
			setCor("Verde");
			if (arma) municao = mo;
			else municao = 0;
		}
		void imp() override{
			cout << "Nome:      " << getNome() << endl;
			cout << "Cor:       " << getCor()  << endl;
			cout << "Rodas:     " << rodas     << endl;
			cout << "Vel.Max:   " << velMax    << endl;
			cout << "Armamento: " << armamento << endl;
			cout << "Municao:   " << municao   << endl;
		}
};

int main (int argc, char** argv){
	Carro v1;
	Moto v2;
	Militar v3(true, 50);
	
	v1.imp(); v2.imp(); v3.imp();
	
	return 0;
}
