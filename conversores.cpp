#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "conversores.h"

using namespace std;

int binarioToDecimal(string binario){
    int decimal;
    reverse(binario.begin(), binario.end());

    for (unsigned int i = 0; i < binario.length(); i++) {
        if (binario[i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

string decimalToBinario(int decimal){
    int resto;
    string binario;

    while (decimal > 0) {
        resto = decimal % 2;
        binario += (resto == 0 ? '0' : '1');
        decimal /= 2;
    }
    reverse(binario.begin(), binario.end());
    return binario;
}


int hexaToDecimal(string hexa){
    int bit;
    int decimal;
    reverse(hexa.begin(), hexa.end());

    for (unsigned int i = 0; i < hexa.length(); i++) {
        bit = (isdigit(hexa[i])) ? hexa[i] - 48 : hexa[i] - 55;
        decimal += bit * pow(16, i);
    }
    return decimal;
}

string decimalToHexa(int decimal) {
    int resto;
    string hexa;

    while (decimal > 16) {
        resto = decimal % 16;

        if (resto > 9) {
            hexa += char(resto + 55);
        } else {
            to_string(resto);
        }

        decimal /= 16;
    }
    if (decimal > 1) { hexa += to_string(decimal); }

    reverse(hexa.begin(), hexa.end());
    return hexa;
}
