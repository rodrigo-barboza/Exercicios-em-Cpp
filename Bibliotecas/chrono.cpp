#include <iostream>
#include <chrono> // e um sub-namespace
#include <ctime>

using namespace std;
using namespace chrono;

int main (int argc, char** argv){

	// declara variavel do tipo seconds de nome s e inicializa com 1
	seconds s(1);
	// a variavel m do tipo minutes vai receber a variavel s do tipo seconds
	// para isso e necessario fazer a conversao para minutos com o duration_cast()
	minutes m = duration_cast <minutes>(s);
	
	/*
		outros tipos:
		
		hours 
		milliseconds
		microseconds
		nanoseconds
	*/
	cout << s.count() << endl;
	
	// classe system clock, acessa as informacoes do sistema
	using chrono::system_clock;
	// duracao de um dia/ segundos por dia
	// duration <tipo, intervalo> nomeDuration(inicializaca)
	duration<int, ratio<60*60*24>> um_dia(1);
	
	// acessa o time_point 
	// system_clock::time_point nomeVar = system_clock::now(); para o horario atual do sistema
	system_clock::time_point hoje = system_clock::now();
	// como hoje contem a data atual do sistema, para o dia posterior eu so preciso somar o que equivale um dia ao horario atual
	system_clock::time_point amanha = hoje + um_dia;
	// no caso para um dia anterior hoje - o que equivale a um dia
	system_clock::time_point ontem = hoje - um_dia;
	
	// variavel tt do tipo time_t
	time_t tt;
	
	// tt vai receber to_time_t (hoje); que contem os horarios atuais do sistema
	tt = system_clock::to_time_t(hoje);
	
	// para imprimir deve-se usar a funcao ctime da biblioteca ctime passando como parametro a variavel em questao
	cout << "HOJE: " << ctime(&tt) << endl;
	
	tt = system_clock::to_time_t(amanha);
	cout << "AMANHA: " << ctime(&tt) << endl;
	
	tt = system_clock::to_time_t(ontem);
	cout << "ONTEM: " << ctime(&tt) << endl;
	
	return 0;
}









