#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

    std::string reverse_text;
    int length = text.length();
    for (int i = length-1; i >= 0; i--) {

        reverse_text += text[i];

    }
    if (text == reverse_text) {
     
        return true;

    }
    else {
        
        return false;

    }
}

int main() {
  
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
  
}