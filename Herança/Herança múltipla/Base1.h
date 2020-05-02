#ifndef BASE1_H_INCLUDED
#define BASE1_H_INCLUDED

class Base1{
	public:
		void impBase1 ();
};

void Base1::impBase1(){
	std::cout << "Imp classe Base1" << std::endl;
}

class Base2{
	public:
		void impBase2();
};

void Base2::impBase2(){
	std::cout << "Imp classe Base2" << std::endl;
}

// herança multipla
class CFB:public Base1, public Base2{
	
};

#endif
