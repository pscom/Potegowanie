#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int D;
    unsigned long int a, b;

    cin >> D;

    unsigned long int srq[D];

    for(int i = 0; i < D; i++)
    {
       cin >> a >> b;

       srq[i] = a;

       for(int j = 1; j < b; j++)
       {
           srq[i] = srq[i] * a;
       }
    }

    for(int i = 0; i < D; i++)
    {
        cout << srq[i] << endl;
    }

    getch();
    return 0;
}
