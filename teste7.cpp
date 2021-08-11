#include <iostream>



int main()
{
using namespace std;
float numero1, numero2;

std::cout << "Informe o primeiro numero: ";
std::cin >> numero1;
std::cout << "Informe o segundo numero: ";
std::cin >> numero2;
if ((numero1 + numero2) >= 20)
std::cout << "\nA soma dos numeros informados e : " << numero1 + numero2 + 8 << endl;
else
std::cout << "\nA soma dos numeros informados e : " << numero1 + numero2 - 5 << endl;
system("PAUSE");
return 0;
}
