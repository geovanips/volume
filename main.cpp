#include <iostream>

using namespace std;

int main()
{
    float c,r,h,pi=3.14;
    cout << " Entre com o raio e a altura(metros) separados por espaco para calcular o volume do cilindro:  ";
    cin >> r >> h;
    c=pi*(r*r)*h;
    cout << " \nO volume do cilindro e:  " << c << " m3\n";
}
