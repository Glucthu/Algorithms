#include <vector>
using namespace std;

bool binary_search(vector <int> vec, int n)
{
	int l = 0, r = vec.size(), m;
    
    while (l < r)
    {
        m = (l+r)/2;

        if (vec[m] < n)
        {
            l = m;
        }
        else if (vec[m] > n)
        {
            r = m;
        }
        else
        {
            return true;
        }
    }

	return false;
}