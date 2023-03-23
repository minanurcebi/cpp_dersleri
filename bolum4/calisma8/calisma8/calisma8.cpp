#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << "\n";

    int b = a << 2; //left shift -- a'nın 2 sola kaydırılmış halini b'ye atıyoruz.(sağdan 2 sıfır ekle)
    cout << b << "\n";

    int c = b >> 3; //right shift -- b'nin 3 sola kaydırılmış halini c'ye ata.(sağdan 3 sıfır sil)
    cout << c << "\n";

    int x = 22 & 13;
    cout << x << "\n";
    
    x = 22 ^ 13;
    cout << x << "\n";

    x = 22 | 13; 
    cout << x << "\n";

    return 0;
}