// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int largest(const int list[], int lowerIndex, int upperIndex);

int main() {
    // Write C++ code here
    int list[] = {5,10,12,8};
    cout << largest(list, 0, 3) << endl;
    
    return 0;
}

int largest(const int list[], int lowerIndex, int upperIndex) {
    int max;
    if (lowerIndex == upperIndex) //size of the sublist is one return list[lowerIndex];
        return list[lowerIndex];
    else
    {
        max = largest(list, lowerIndex + 1, upperIndex);
        if (list[lowerIndex] >= max)
            return list[lowerIndex];
        else 
            return max;
    }
}
