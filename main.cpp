#include <iostream>
#include <sstream>
#include <string>
#include "caller.hpp"
#include "menu.hpp"


int dialog (const char* messeges[], int size_messeges) {
    printf("----------\n");
    for (int i = 0; i < size_messeges; i++) {
        std::cout << messeges[i] << std::endl;
    }
    printf("Choose your action: ");
    int num;
    std::string s;
    bool flag = true;
    do {
        if(!std::getline(std::cin, s)) {
            throw std::runtime_error("EOF");
        }
        try {
            num = std::stoi(s);
            if (num < 0 || num > 6) {
                std::cout << "Wrong argument. Retry: ";
            }
            else {
                flag = false;
            }
        }
        catch (const std::exception& e) {
            std::cout << "Wrong argument. Retry: ";
        }
    } while (flag);
    return num;
}

int main() {
    clr::caller caller;
    std::string s;
    std::string name;
    std::cout << "Enter name: ";
    do {
        if (!getline(std::cin, name)) {
            std::cout << "EOF" << std::endl << "Exiting..." << std::endl;
            return 0;
        }
        if (name.empty()) std::cout << "Try again: ";
    } while (name.empty());
    const char* messages[] = {"0) Quit",
                                "1) Enter the caller structe",
                                "2) Enter the format string application/x-www-form-urlencoded",
                                "3) Use string_to_struct",
                                "4) Use struct_to_string",
                                "5) Print string",
                                "6) Print struct"};
    const int size_messeges = sizeof(messages) / sizeof(messages[0]);
    void (*funcs[])(clr::caller&, std::string&, std::string&) = {
        Exit, Enter_struct, Enter_string, Use_string_to_struct,
        Use_struct_to_string, Print_string, Print_struct
    };
    int n;
    do {
        try {
            n = dialog(messages, size_messeges);
            funcs[n](caller, s, name);
        }
        catch(const std::runtime_error& e) { //EOF
            std::cout << e.what() << std::endl;
            break;
        }
        catch(const std::invalid_argument& e) {
            std::cout << "ERROR: " << e.what() << std::endl;
        }
    } while(n);
    std::cout << "Exiting..." << std::endl << std::endl;
    return 0;
}
