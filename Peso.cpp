#include <iostream>
using namespace std;

int main() {
    double peso;
    double gravidade_marte = 0.377; 
    double peso_marte;

    cout << "Digite o peso do objeto na Terra (em kg): ";
    cin >> peso;

    peso_marte = peso * gravidade_marte;


    cout << "O peso do objeto em Marte seria: " << peso_marte << " kg" << endl;

    return 0;
}
