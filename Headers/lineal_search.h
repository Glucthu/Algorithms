#include <vector>
using namespace std;

bool lineal_search(vector <int> vec, int n)
{
	for (int i = 0; i < vec.size(); i++)
		if(vec[i] == n)
			return true;
	return false;
}