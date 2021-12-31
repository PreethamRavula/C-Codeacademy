/* This program is creating a game of rock,
    paper, scissors, lizard, spock from Big Bang Theory*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand(time(NULL));

  int user = 0;
  int number = 0;

  int computer = rand() % 5 + 1;

  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️ \n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🧛‍♂️\n";

  std::cout << "shoot!\n";

  std::cin >> user;

  if (computer == 1 && user == 2) {
    std::cout << "User throws Paper against Rock " << "\nUser Wins!\n";
  }
  else if (computer == 2 && user == 1) {
    std::cout << "Computer throws Paper against Rock " << "\nComputer Wins!\n";
  }
  else if (computer == 3 && user == 2) {
    std::cout << "Computer throws Scissors against Paper " << "\nComputer Wins!\n";
  }
  else if (computer == 2 && user == 3) {
    std::cout << "User throws Scissors against Paper " << "\nUser Wins!\n";
  }
  else if (computer == 1 && user == 3) {
    std::cout << "User throws Rock against Scissors " << "\nComputer Wins!\n";
  }
  else if (computer == 3 && user == 1) {
    std::cout << "Computer throws Scissors against Rock " << "\nComputer Wins!\n";
  }
  else if (computer == 2 && user == 5) {
    std::cout << "Computer throws Paper against Spock " << "\nComputer Wins!\n";
  }
  else if (computer == 5 && user == 2) {
    std::cout << "User throws paper against Spock " << "\nUser Wins!\n";
  }
  else if (computer == 4 && user == 5) {
    std::cout << "User throws Spock against the Rock " << "\nUser Wins!\n";
  }
  else if (computer == 5 && user == 4) {
    std::cout << "Computer throws Spock against the Rock " << "\nComputer Wins!\n";
  }
  else if (computer == 4 && user == 2) {
    std::cout << "Computer throws Lizard against Paper " << "\nComputer Wins!\n";
  }
  else if (computer == 2 && user == 4) {
    std::cout << "User throws Lizard against Paper " << "\nUser Wins!\n";
  }
  else if (computer == 3 && user == 4) {
    std::cout << "User throws Scissors against Lizard " << "\nUser Wins!\n";
  }
  else if (computer == 4 && user == 3) {
    std::cout << "Computer throws Scissors against Lizard " << "\nComputer Wins!\n";
  }
  else if (computer == 5 && user == 3) {
    std::cout << "Computer throws Spock against Scissors " << "\nComputer Wins!\n";
  }
  else if (computer == 3 && user == 5) {
    std::cout << "User throws Spock against Scissors " << "\nUser Wins!\n";
  }
  else if (computer == 4 && user == 5) {
    std::cout << "Computer throws Lizard against Spock " << "\nComputer Wins!\n";
  }
  else if (computer == 5 && user == 4) {
    std::cout << "User throws Lizard against Spock " << "\nUser Wins!\n";
  }
  else if (computer == 1 && user == 4) {
    std::cout << "Computer throws Rock against Lizard " << "\nComputer Wins!\n";
  }
  else if (computer == 4 && user == 1) {
    std::cout << "User throws Rock against Lizard " << "\nUser Wins!\n";
  }
  else {
    std::cout << "Both players tied " << "\nNo one wins\n";
  }
  return 0;
}
