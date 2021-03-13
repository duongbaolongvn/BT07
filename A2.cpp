
#include <iostream>
using namespace std;
void KT(int arr[])
{
    cout << sizeof(arr);
}
int main()
{
    int arr[5];
    cout << sizeof(arr) << endl;
    KT(arr);
    return 0;
}
