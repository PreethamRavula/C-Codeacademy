#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string input_message = "a whale of a deal";
    std::vector<char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');
    std::vector<char> result;

    for (int i = 0; i < input_message.size(); i++) {

        for (int j = 0; j < vowels.size(); j++) {

            if (input_message[i] == vowels[j]) {

                result.push_back(input_message[i]);

                }
                }
                if (input_message[i] == 'e' || input_message[i] == 'u') {

                    result.push_back(input_message[i]);

                    }
                    }
                    for (int i = 0; i < result.size(); i++) {

                        std::cout << result[i];
                        
                        }
                        }