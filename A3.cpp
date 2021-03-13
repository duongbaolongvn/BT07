#include <iostream>
using namespace std;

int demchan(int *arr, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0) dem++;
    }
    return dem;
}
int main()
{
    int a[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,};
    cout << demchan(a,5) << " " << demchan(a+10,5);
    return 0;
}