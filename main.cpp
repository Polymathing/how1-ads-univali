#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "conversores.h"
#include "menu.h"

int firstAction = 1;
int nextAction = 1;

int main() {
  do {
    mainMenu();

    if (firstAction != 4) {
      checkNextAction();
      } else { nextAction = 0; }

  } while(nextAction == 2);

  return 0;
}
