#include <iostream>

int main() {

  // Declaring and initializing the variables;
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1;
  int answer2;
  int answer3;
  int answer4;
  int max = 0;
  std::string house;

  // Question-1:
  std::cout << "\nThe Sorting Hat Quiz!\n\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n" << "1) The Good\n" << "2) The Great\n" << "3) The Wise\n" << "4) The Bold\n";
  std::cin >> answer1;

  if (answer1 == 1) {
    hufflepuff += 1;
  }
  else if (answer1 == 2) {
    slytherin += 1;
  }
  else if (answer1 == 3) {
    ravenclaw += 1;
  }
  else if (answer1 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  // Question-2:
  std::cout << "\nQ2)Dawn or Dusk?\n\n" << "1) Dawn\n" << "2) Dusk\n";
  std::cin >> answer2;

  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
  }
  else if (answer2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  // Question-3:
  std::cout << "\nQ3) Which Kind of instrument most pleases your ear?\n\n" << "1) The violin\n" << "2) The trumpet\n" << "3) The piano\n" << "4) The drum\n";
  std::cin >> answer3;

  if (answer3 == 1) {
    slytherin += 1;
  }
  else if (answer3 == 2) {
    hufflepuff += 1;
  }
  else if (answer3 == 3) {
    ravenclaw += 1;
  }
  else if (answer4 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  // Question-4:
  std::cout << "\nQ4) Which road tempts you most?\n\n" << "1) The wide, sunny grassy lane\n" << "2) The narrow, dark, lantern-lit alley\n" << "3) The twisting, leaf-strewn path through woods\n" << "4) The cobbled street lined(ancinet buildings)\n";
  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff += 1;
  }
  else if (answer4 == 2) {
    slytherin += 1;
  }
  else if (answer4 == 3) {
    gryffindor += 1;
  }
  else if (answer4 == 4) {
    ravenclaw += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  // Deciding the house name:
  if (gryffindor > max) {
    max = gryffindor;
    house = "\nGryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "\nHufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "\nRavenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "\nSlytherin";
  }

  std::cout << house << "!\n";

}
