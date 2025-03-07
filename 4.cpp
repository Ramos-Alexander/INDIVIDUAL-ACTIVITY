#include <iostream>

int main() {
    char ch;

    for (int i = 1; i <= 5; i++) {
        std::cout << "Enter a character: ";
        std::cin >> ch; 

        if (ch == 'n') {
            std::cout << "Exiting loop as 'n' was entered." << std::endl;
            break;  
        }
    }

    return 0; 
}0
