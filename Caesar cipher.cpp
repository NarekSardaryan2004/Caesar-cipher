#include <iostream>
#include <string>

int main()
{
    int shift = 3;
    std::string message;
    
    std::cout << "Enter your message: ";
    getline(std::cin, message);

    for (size_t i = 0; i < message.size(); ++i) {
        char ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            message[i] = 'a' + (ch - 'a' + shift + 26) % 26;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            message[i] = 'A' + (ch - 'A' + shift + 26) % 26;
        }
        else {
            message[i] = ch;
        }
    }

    std::cout << "Encrypted: " << message << std::endl;

    return 0;
}
