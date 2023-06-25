#include <iostream>

using namespace std;

// --- função sem retorno:
void inscrever() {
    cout << "Fique bonzinho!\n";
}

// --- variavel global:
// int t = 1;

// --- definir constante:
#define pi 3.14;
#define fodasse cout << "VTNC\n";

int somar(int x, int y) {
    // --- variavel local:
    // int t = 0;
    int soma;
    soma = x + y;
    return soma;
}

int main() {

    // --- variavel global:
    // int t;
    // t = 0 ;
    // logo, cout << t; >> 0

    inscrever();

    int a = 5, b = 4;
    int s;
    s = somar(a, b);
    cout << s << endl;

    fodasse;

    return 0;
}