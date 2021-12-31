#include <iostream>
#include <cstdlib>

int main() {

  srand(time(NULL));
  int number = std::rand() % 10;
  std::cout << "MAGIC 8-BALL: ";
  std::cout << number << " - ";

  if (number == 0) {
    std::cout << "It is certain.\n";
  }
  else if (number == 1) {
    std::cout << "It is decidedly so.\n";
  }
  else if (number == 2) {
    std::cout << "Without a doubt.\n";
  }
  else if (number == 3) {
    std::cout << "Yes - definetly.\n";
  }
  else if (number == 4) {
    std::cout << "You may rely on it.\n";
  }
  else if (number == 5) {
    std::cout << "As I see it, yes.\n";
  }
  else if (number == 6) {
    std::cout << "Most likely.\n";
  }
  else if (number == 7) {
    std::cout << "Outlook good.\n";
  }
  else if (number == 8) {
    std::cout << "Yes.\n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }

  return 0;
}
