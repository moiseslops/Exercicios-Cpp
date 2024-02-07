/*
Recentemente, Kelvin começou a publicar suas previsões meteorológicas em seu site, porém há um problema: todas as suas previsões descrevem a temperatura em graus Fahrenheit.

Vamos converter uma temperatura de Fahrenheit (F) para Celsius (C).

A fórmula é a seguinte: 

C=( F-3 2 ) / 1 . 8

Primeiro, pesquise no Google a temperatura atual de Nova York em Fahrenheit.

Declare uma doublevariável nomeada tempfe inicialize-a com a temperatura.

Declare outra double variável chamada tempc.

Mostre a temperatura em Celsius
*/
#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  tempf = 75;
  
  std::cout << "Coloque a temperatura em Fahrenheit: ";

  std::cin >> tempf;
  
  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "A temperatura é " << tempc << " graus Celsius.\n";
  
}