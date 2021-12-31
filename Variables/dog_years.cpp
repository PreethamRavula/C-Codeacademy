#include <iostream>

int main() {

  int dog_age; // Declaring and initializing a variable that stores dog's age
  std::string dog_name; // Declaring a variable for the dog name
  int early_years; // Declaration of variable for dog's early years
  int later_years; // Declaration of variable for dog's after years
  double human_years; // Declaration of variables for dog's human years

  std::cout << "Enter you dog age: ";
  std::cin >> dog_age;
  std::cout << "Enter the dog's name: ";
  std::cin >> dog_name;

  if (dog_age < 2) {
    human_years = dog_age * (10.5);
    std::cout << "My name is " << dog_name << " I'm a puppy and I am " << human_years << " years old in human years\n";
  }
  else {
    early_years = 21; // First two years of dog's life is counted as 21 human years
    later_years = (dog_age - 2) * 4; // Each year after early years is worth 4 human years
    human_years = early_years + later_years; // Total human years is sum of early years and later years
    std::cout << "My name is " << dog_name << " Ruff ruff, I am " << human_years << " years old in human years\n";
  }
}
