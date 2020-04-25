#include <iostream>

using namespace std;
int main (int argc, char **argv){

	enum armas {
		fuzil, // por defaut = 0
		revolver = 6, 
		rifle = 5, 
		escopeta = 1
	};
	
	armas armaSel = rifle;

	cout << armaSel;
	
	
	return 0;
}
