#include <iostream>
using namespace std;

int main()
{
    int a;  //tip, isim
    a = 10; //deger
    cout << a << endl;
    a = 20; // "=" :atama(assignment)
    cout << "Hello World!\n";
    int b = 30; //Her bir cümle (statement)
    int c = 40; int d = 50; //iki satırı tek satırda yazdık.
    int x = 60, y = 70, z{};

    cout << b << "\n";  //endl yerine "\n" yazmak daha performanslı
    cout << c << "\n";
    cout << d << "\n";
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";
    return 0;
}