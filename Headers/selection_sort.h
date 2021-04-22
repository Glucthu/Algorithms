#include <vector>
using namespace std;

vector <int> selection_sort(vector <int> vec)
{
    int minor, aux;

    for(int i = 0; i < vec.size(); i++)
    {
        minor = i;

        for(int j = i; j < vec.size(); j++)
            if(vec[j] < vec[minor])
                minor = j;

        aux = vec[i];
        vec[i] = vec[minor];
        vec[minor] = aux;
    } 
        
    return vec;
}