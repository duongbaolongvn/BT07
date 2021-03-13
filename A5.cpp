
#include <iostream>
using namespace std;

char* weird_string() {
   char arr[6] = "123345";
   return arr;
}

int main()
{
    cout << weird_string();
    return 0;
}