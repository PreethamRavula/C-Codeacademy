#include <iostream>

int main() {

  // Declaring variables for currency
  int pesos;
  int reais;
  int soles;
  double dollars;

  // Taking input of how much currency a user has:
  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  // 1 Mexican Peso = 0.048 USD
  // 1 Brazillian Real = 0.18 USD
  // 1 Peruvian Sole = 0.25 USD

  // total dollars converted from 3 currencies:
  dollars = (0.048 * pesos) + (0.18 * reais) + (0.25 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";

  return 0;
  }
