#include <iostream>
#include <vector>
#include <fstream>
#include "Headers/lineal_search.h"
#include "Headers/binary_search.h"

using namespace std;

int main()
{
	/***  List  ***/
	vector <int> vec;
	int size;
	ifstream in("list");

	in >> size;
	vec.resize(size);
	
	for(int i = 0; i < size; i++)
		in >> vec[i];
	
	/*** Searching ***/
	int n;
	cout << "Number: "; cin >> n;
	if(lineal_search(vec, n))
		cout << "Found!\n";
	else
		cout << "Not found\n";

	return 0;
}
