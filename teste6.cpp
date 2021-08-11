#include <iostream>

using namespace std;

int main() {
  int numero;
  cout << "Digite um numero inteiro: ";
  cin >> numero;

  //Se um numero qualquer dividido por 2 tiver resto zero sera PAR  
  if (numero  >= 0)
      cout << "Positivo" << endl;
  else
      cout << "Negativo" << endl;

  return 0;
}
