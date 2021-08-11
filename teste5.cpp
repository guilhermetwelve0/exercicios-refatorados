#include <iostream>

using namespace std;

int main() {
  int numero;
  cout << "Digite um numero inteiro: ";
  cin >> numero;

  //Se um numero qualquer dividido por 2 tiver resto zero sera PAR  
  if (numero % 2 == 0)
      cout << "Par" << endl;
  else
      cout << "Impar" << endl;

  return 0;
}
