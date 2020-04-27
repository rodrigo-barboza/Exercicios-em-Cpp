#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void setNome   (std::string nome){
	this->nome = nome;
}

void setVel    (int vel){
	this->vel = vel;
}

void setLigado (bool ligado){
	this->ligado = ligado;
}

std::string getNome (){
	return nome;
}

int getVel 	   (){
	return vel;
}

bool getLigado (){
	return ligado;
}

#endif
