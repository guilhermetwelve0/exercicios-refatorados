#include <iostream>

int main() {
    setlocale(LC_ALL, "Portuguese");
	using namespace std;
    float num1,multiplicacao;

    cout << "Digite um numero : ";
    cin >> num1;
    multiplicacao = num1 * (-1);
    

   
    if(num1 <= 0 ){
	cout << "\nO numero negativo e : " << num1;
	cout << "\nA multiplicacao de um numero negativo para tornar positivo e : " <<  multiplicacao;
	}else{
		cout << "O Numero é positivo";
	}
	return 0;
}
