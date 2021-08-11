#include <iostream>
 
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	using namespace std;
    float c, f;
    
 
    cout << "A temperatura em F e = ";
	cin >> f;
    
	
    
    c = (f - 32) * 5 / 9;
 
    cout << "A temperatura em C e  = " << c;

 
    return 0;    
}
