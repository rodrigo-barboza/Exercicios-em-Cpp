#include <iostream>
#include <algorithm>
#include <vector>

/*
	replace_if();
	fill();
	remove();
	unique();
	reverse();
	sort();
	is_sorted();
	merge();
	set_union();
	set_intersection();
	set_diference();
	min();
	max();
	minmax();
	min_element(); // para coleções
	max_element(); // para coleções
	minmax_element(); // para coleções
*/

using namespace std;

int main (int argc, char** agrv){
	
	// substitui valores da coleção que atendam determinada função
	vector<int>v1{1, 4, 7, 5, 8, 6, 9, 0};
	replace_if (v1.begin(), v1.end(), [](int a){ return a<5; }, 500);
	for (auto x: v1) cout << x << endl;
	
	// preenche uma coleção com um valor específico
	vector<int>v2(10);
	fill(v2.begin(), v2.end(), 10);
	for (auto x: v2) cout << x << endl;
	
	cout << "\n\n\n\n" << endl;
	
	// remove um valor indicado da coleção
	vector<int>v3{1, 2, 34, 56, 7, 8, 9, 123, 4, 2, 0};
	int qtde = count(v3.begin(), v3.end(), 2);
	remove(v3.begin(), v3.end(), 2);
	v3.resize(v3.size()-qtde);
	v3.shrink_to_fit();
	for (auto x: v3) cout << x << endl;
	
	cout << "\n\n\n\n" << endl;
	
	// remore elementos duplicados consecutivos da coleção
	vector<int>v4{0, 1, 2, 3, 3, 3, 4, 5, 2, 6, 7, 8, 9};
	vector<int>::iterator it;
	it = unique(v4.begin(), v4.end());
	v4.resize(distance(v4.begin(), it));
	for (auto x: v4) cout << x << endl;
	
	// inverte a ordem dos elementos da coleção
	vector<int>v5{0, 1, 2, 3, 4, 5, 6, 7};
	reverse (v5.begin(), v5.end());
	for (auto x: v5) cout << x << endl;
	
	cout << "\n\n\n\n" << endl;
	
	// ordena os elementos
	vector<int>v6{2, 5, 3, 0, 4, 9, 16, 7};
	sort (v6.begin(), v6.end());
	for (auto x: v6) cout << x << endl;
	
	// verifica se a coleção está ordenada
	vector<int>v7{2, 5, 3, 0, 4, 9, 16, 7};
	if (is_sorted (v7.begin(), v7.end())) cout << "esta ordenada. " << endl;
	else cout << "nao esta ordenada. " << endl;

	// mescla duas coleções e armazena em um terceiro container (completa com 0 as posições que sobrarem)
	vector<int>v8{2, 5, 3, 0};
	vector<int>v9{4, 9, 16, 7};
	vector<int>v10(10);
	merge (v8.begin(), v8.end(), v9.begin(), v9.end(), v10.begin());
	for (auto x: v10) cout << x << endl;
	
	// união de duas coleções
	vector<int>v11{2, 5, 3, 0};
	vector<int>v12{4, 9, 16, 7};
	vector<int>v13(10);
	set_union (v11.begin(), v11.end(), v12.begin(), v12.end(), v13.begin());
	for (auto x: v13) cout << x << endl;
	
	// intersecção de duas coleções
	vector<int>v14{2, 5, 3, 0};
	vector<int>v15{2, 3, 4, 5, 6};
	vector<int>v16(10);
	set_intersection (v14.begin(), v14.end(), v15.begin(), v15.end(), v16.begin());
	for (auto x: v16) cout << x << endl;
	
	// set_diference fez o contrário de set_intersection();
	
	int n1 = 2, n2 = 12;
	cout << "menor: " << min(n1, n2) << endl;
	cout << "maior: " << max(n1, n2) << endl;
	
	// retorna o maior e menor de uma serie de valores
	int n3= 6, n7= 12, n8 = 60;
	auto res = minmax({n1, n2, n3, n7, n8});
	cout << "minimo: " << res.first << " - maximo: " << res.second << endl;
	
	cout << "\n\n\n\n" << endl;
	
	vector<int>v20{5, 4, 10, 30,12, 15, 8, 7};
	vector<int>::iterator it1, it2;
	
	it1 = min_element(v20.begin(), v20.end());
	it2 = max_element(v20.begin(), v20.end());
	auto res2 = minmax_element(v20.begin(), v20.end());
	
	cout << "min: " << *it1 << endl;
	cout << "max: " << *it2 << endl;
	cout << "min: " << *res2.first << " - max: " << *res2.second << endl;
	
	return 0;
}
