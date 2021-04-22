#include <vector>
#include <iostream>
using namespace std;

vector <int> bubble_sort(vector <int> vec)
{
    int aux; 

    for(int i = vec.size(); i > 0; i--)
        for(int j = 0; j < i-1; j++)
            if(vec[j] > vec[j+1])
            {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }

    return vec;
}