#include <iostream>
#include <cmath>

int main() {
  // Declaring the constraints a, b, c for the quadriatic equation:
  int a;
  int b;
  int c;

  // Declaring variables to store the roots:
  double root1;
  double root2;

  // Asking for user Input:
  std::cout << "Type in the values for a, b and c :\n";
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;

  // defining the root values of the equation:
  root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

  // outputting the root values to terminal:
  std::cout << "Root 1 of the equation is: " << root1 << "\n";
  std::cout << "Root 2 of the equation is: " << root2 << "\n";

  return 0;
  }
