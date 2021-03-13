
#include <iostream>
using namespace std;

int searchbinary(int *arr, int n, int key)
{
    int Low = 0, High = n-1, Mid = (n-1)/2;
    while (Low <= High)
    {
        if (*(arr + Mid) == key) return mid;
        else if (*(arr + mid) < key) Low = Mid + 1;
        else High = Mid - 1;
        Mid = (Low + High) / 2;
    }
    return -1;
}
int main()
{
    int a[10] = {1,3,5,7,9,11,13,15,17,19};
    cout <<searchbinary(a,10,20);
    return 0;
}