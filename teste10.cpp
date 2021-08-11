#include<iostream>
 
 int main()
{
        setlocale(LC_ALL, "Portuguese");
		using namespace std;
 
	cout << "\nInforme a temperatura em graus Centigrados: " << endl ;
	float vTempC;
	cin >> vTempC;
 
	float vTempF;
	vTempF = vTempC * 1.8 + 32;
 
	cout << "\nA temperatura em graus Fahrenheit e: " << vTempF << endl;
 
	cout << "\n\n" << endl;
	system("pause");
	return 0;    
}
