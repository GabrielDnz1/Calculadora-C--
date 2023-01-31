#include <iostream>

using namespace std;
int main(){
    // numero 1
    float n1;
    cout << "Digite um numero:";
    cin >> n1;
    // numero 2
    float n2;
    cout << "Digite outro numero:";
    cin >> n2;
    // operador
    char operador;
    cout << "Digite um operador(+, -, /, x):";    
    cin >> operador;     
    switch (operador)
    {
    case ('+'):
        cout << n1+n2;
        break;
    case ('-'):
        cout << n1-n2;
        break;
    case ('x'):
        cout << n1*n2;
        break;
    case ('/'):
        cout << n1/n2;
        break;
    
    default:
        break;
    }
    return 0;
    }