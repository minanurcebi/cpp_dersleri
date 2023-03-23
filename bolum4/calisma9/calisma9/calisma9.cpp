#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << "\n"; //standart output monitör

    cin >> a; //klavyeden okunan değeri a'ya atar. //standart input klavye
    cout << "klavyeden " << a << " degerini girdiniz."<< "\n";
    cout << "klavyeden girilen degerin 10 fazlasi " << a+10 << "\n";

    return 0;
}