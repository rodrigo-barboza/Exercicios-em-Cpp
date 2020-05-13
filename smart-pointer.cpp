#include <iostream>
#include <memory> // para usar os smart pointers

using namespace std;

class Carro{
	public:
		int vel=0;
		int getVel (){
			return vel;
		}
		void setVel (int vel){
			this->vel = vel;
		}
};

int main (int argc, char** argv){
	unique_ptr <int> pnum(new int);
	shared_ptr <int> p2(new int);
	shared_ptr <int> p3 = p2;
	//string* str = new string("Rodrigo");
	unique_ptr <string> str(new string("Rodrigo")); 
	*pnum = 10;
	
	//cout << *str << " Tamanho: " << str->size() << endl;
	cout << *str << " Tamanho: " << str->size() << endl;
	cout << *pnum << " - " << &pnum << endl;
	
	// procedimento normal
	Carro *c1 = new Carro();
	cout << c1->getVel() << endl;
	delete c1;
	
	// com smart pointer (não precisa do delete)
	unique_ptr<Carro>c2(new Carro);
	cout << c2->getVel() << endl;
	
	// com shared
	shared_ptr<Carro>c3(new Carro);
	shared_ptr<Carro>c4 = c3;
	
	c3->setVel(82);
	cout << c4->getVel() << endl;
	return 0;
}
