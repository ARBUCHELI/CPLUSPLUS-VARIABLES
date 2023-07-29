#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  //0,00025 from Pesos to USD
  //0.21 from Reais to USD
  //0.28 from Soles to USD

  dollars = (0.00025 * pesos) + (0.21 * reais) + (0.28 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
}