/*
Adicione o seguinte código:

std::cin >> tip;

Para que o usuário do programa possa inserir algo com o teclado e o que inserir seja salvo na intvariável chamada tip. 

Vamos gerar o seguinte usando encadeamento:

You paid [tip] dollars.

onde the [tip]deve ser o valor da variável tip.

Certifique-se de adicionar uma nova linha ao final da saída.*/

#include <iostream>

int main() {
  
  int tip = 0;
  
  std::cout << "Enter tip amount: ";
  std::cin >> tip;
  std::cout << "You paid" << tip << "dollars.\n";
  
  
  
  
}