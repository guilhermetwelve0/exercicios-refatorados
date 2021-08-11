#include <iostream>

int main()
{
float numero1, numero2;
using namespace std;

std::cout << "Informe o primeiro numero: ";
std::cin >> numero1;
std::cout << "Informe o segundo numero: ";
std::cin >> numero2;
if ((numero1 + numero2) > 10)
std::cout << "\nA soma dos numeros informados e " << numero1 + numero2 << endl;
system("PAUSE");
return 0;
}
