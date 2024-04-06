#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int maxSize = 1000, size = 0;
    int *x = new int[1000];
    int *y = new int[1000];
    for (int i = 0; i < maxSize; ++i) 
    {
        if (cin >> x[i] >> y[i])
            ++size;
        else
            break;
    }
    int maxDistance = 0, distance;
    for (int i = 0; i < size; ++i) 
    {
        for (int j = i + 1; j < size; ++j) 
        {
            distance = floor(sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)));
            if (distance > maxDistance)
                maxDistance = distance;
        }
    }
    cout << maxDistance << endl;
    return 0;
}