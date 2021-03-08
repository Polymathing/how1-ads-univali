#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "conversores.h"

using namespace std;

int calcularDecimal(string binario){
    int decimal;
    reverse(binario.begin(), binario.end());

    for (unsigned int i = 0; i < binario.length(); i++) {
        if (binario[i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}


string calcularBinario(int decimal){
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
