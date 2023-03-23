#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << "\n";
    float pi = 3.14;
    cout << pi << "\n";
    long tl = 23534265232252;
    cout << tl << "\n";
    char c = 'x';
    cout << c << "\n";

    int cc = c;
    cout << cc << "\n"; //120 değerini ekrana yazdırdı.

    int ipi = pi;
    cout << ipi << "\n"; //Sayının tam sayı olan kısmını alır yani ekrana 3 yazdırır. Yuvarlama yapmıyor!

    float fa = a;
    cout << fa << "\n"; //float hem tam sayı hem de ondalıklı kısmı tutar.

    int at = 64;
    char cat = at;
    cout << cat << "\n"; //64 sayısının ascii tablosunda @ sembolüne eşit olması.
    cout << (char)at << "\n";  //type casting -- herhangi bir değişkenin başına hangi tipe dönüşmesini istiyorsak o tipi parantez içinde yazabiliriz.
    cout << (char)100 << "\n";

    return 0;
}