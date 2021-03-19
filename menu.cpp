#include <iostream>
#include "conversores.h"

using namespace std;

extern int firstAction;
extern int nextAction;

void chooseConversor(int action) {
  switch(action) {
    case 1:
      cout << "1- Binario para Decimal\n2- Decimal para Binario" << endl;
      break;
    case 2:
      cout << "chamando funcao octal" << endl;
      break;
    case 3:
      cout << "chamando funcao hexa" << endl;
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
  }


void mainMenu() {
  do {
    cout << "1- Binario\n2- Octal\n3- Hexa\n4- Encerrar" << endl;
    cin >> firstAction;
  } while(firstAction < 0 || firstAction > 4);

  chooseConversor(firstAction);
}
