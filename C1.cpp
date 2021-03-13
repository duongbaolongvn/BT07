
#include <iostream>
#include <ctime>
using namespace std;

int dice()
{
    return rand() % 6 + 1;
}
int main()
{
    srand(time(0));
    int pointP1 = 0, pointP2 = 0;
    const int P1 = 0, P2 = 1;
    int turn = P1;
    while (pointP1 < 100 || pointP2 < 100)
    {
        int diceroll = dice();
        switch (turn)
        {
            case P1:
                pointP1 += diceroll;
                cout << "xuc xac nguoi choi 1: " << diceroll << " 	Tong nguoi 1: " << pointP1 << endl;
                turn = P2;
                break;
            case P2:
                pointP2 += diceroll;
                cout << "xuc xac nguoi choi 2: " << diceroll << " 	Tong nguoi 2: " << pointP2 << endl;
                turn = P1;
                break;
        }
    }
    return 0;
}
