#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << "\n";

    a++; //bir arttır postfix
    cout << a << "\n";

    ++a; //increment bir arttır prefix
    cout << a << "\n";

    int b = 20;
    cout << a+b << "\n";

    cout << 10 + 30 * 2 << "\n"; //işlem önceliği
    cout << 15 % 2 << "\n"; //remainder, modülo

    a--;
    a = a - 1;
    cout << a << "\n";

    //preincrement ve postincrement arasındaki fark;
    cout << a++ << "\n"; //a'nın ilk değeri alınır ekrana yazdırılır sonra işleme dahil edilip bir arttırılır.
    cout << ++a << "\n"; //a'nın değeri önce arttırılır sonra ekrana yazdırılır.

    //assignment
    int x = 10;
    x = x - 1; // = "x--" = "--x" = "x-=1"
    x += 5; // = "x = x+5"
    cout << x << "\n";
    x *= 2; // = "x = x*2" 
    cout << x << "\n";

    return 0;
}