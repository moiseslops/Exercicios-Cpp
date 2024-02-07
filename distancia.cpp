/*

Crie um programa que peça como entrada uma distância em milhas. O programa então mostrará quanto é essa distância em quilômetros.

*/
#include <iostream>
using namespace std;

int main() {
    double milhas;
    double kilometros = 1.60934; 
    double km_milhas;

    cout << "Digite o total de milhas ";
    cin >> milhas;

    km_milhas = milhas * kilometros;


    cout << "A distância de milhas em km é " << km_milhas << " km" << endl;

    return 0;
}
