#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include "Veiculo.h"

void Veiculo::setNome   (std::string nome){
	this->nome = nome;
}

void Veiculo::setVel    (int vel){
	this->vel = vel;
}

void Veiculo::setLigado (bool ligado){
	this->ligado = ligado;
}

std::string Veiculo::getNome (){
	return nome;
}

int Veiculo::getVel 	   (){
	return vel;
}

bool Veiculo::getLigado (){
	return ligado;
}

#endif
