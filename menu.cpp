#include <iostream>
#include "conversores.h"

using namespace std;

extern int firstAction;
extern int nextAction;
int option = 0;

int chooseConversor(int action) {


  switch(action) {
    case 1:
      if (option == 0) {
        cout << "1- Binario para Decimal\n2- Decimal para Binario" << endl;
        cin >> option;
      }
      switch(option) {
        case 1:
            {
            string binario;
            cout << "Insira o binário: " << endl;
            cin >> binario;
            cout << binarioToDecimal(binario) << endl;
            break;
            }
        case 2:
            {
            int decimal;
            cout << "Insira o decimal: " << endl;
            cin >> decimal;
            cout << decimalToBinario(decimal) << endl;
            break;
            }
      }
      break;
    case 2:
      if (option == 0) {
        cout << "1- Octal para Decimal\n2- Decimal para Octal" << endl;
        cin >> option;
      }
      switch(option) {
        case 1:
            {
            string octal;
            cout << "Insira o octal: " << endl;
            cin >> octal;
            cout << octalToDecimal(octal) << endl;
            break;
            }
        case 2:
            {
            int decimal;
            cout << "Insira o decimal: " << endl;
            cin >> decimal;
            cout << decimalToOctal(decimal) << endl;
            break;
            }
      }
      break;
    case 3:
      if (option == 0) {
        cout << "1- Hexa para Decimal\n2- Decimal para Hexa" << endl;
        cin >> option;
      }
      switch(option) {
        case 1:
            {
            string hexa;
            cout << "Insira o hexa: " << endl;
            cin >> hexa;
            cout << hexaToDecimal(hexa) << endl;
            break;
            }
        case 2:
            {
            int decimal;
            cout << "Insira o decimal: " << endl;
            cin >> decimal;
            cout << decimalToHexa(decimal) << endl;
            break;
            }
      }
      break;
    case 4:
      cout << "encerrando..." << endl;
      break;
  }
}

void checkNextAction() {

  cout << "1- Refazer\n2- Retornar" << endl;
  cin >> nextAction;

  if (nextAction == 1) {
    chooseConversor(firstAction);
    checkNextAction();
    }
  else {
    option = 0;
  }
  }


void mainMenu() {
  do {
    cout << "1- Binario\n2- Octal\n3- Hexa\n4- Encerrar" << endl;
    cin >> firstAction;
  } while(firstAction < 0 || firstAction > 4);

  chooseConversor(firstAction);
}
