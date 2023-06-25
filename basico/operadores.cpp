#include <iostream>
#include <math.h>
// mais funções da math.h = https://cplusplus.com/reference/cmath/

using namespace std;

int main () {
    int a = 5, b = 2;

    // int soma = a + b;
    // cout << "Soma: " << soma << endl;
    // int sub = a - b;
    // int mult = a * b;
    // int div = a / b; >> 2
    // int resto = a % b; >> 1 
    // float div2 = float(a) / float(b); >> 2.5
    // float pot = pow(a, b); >> 25

    // --- para não gastar memória com uma constante, jogar direto no cout:
    cout << "Soma: " << a + b << endl;

    // --- incremento e decremento:
    // a = a +/- 1;
    // a +/-= x;
    // a++/--;

    // a *= 2; >> a = 10


    return 0;
}