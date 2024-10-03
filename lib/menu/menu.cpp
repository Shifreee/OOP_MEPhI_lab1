#include "menu.hpp"
#include <iostream>
#include <algorithm>


void Exit(clr::caller&, std::string&, std::string&) {
    return;
}

void Enter_struct(clr::caller& caller, std::string&, std::string&) {
    std::string s;
    std::cout << "Enter name: ";
    do {
        if (!std::getline(std::cin, s)) {
            throw std::runtime_error("EOF");
        }
        if (s.empty()) std::cout << "Try again: ";
    } while (s.empty());
    caller.name = s;

    std::cout << "Enter phone number: ";
    bool is_pn = false;
    do {
        if (!std::getline(std::cin, s)) {
            throw std::runtime_error("EOF");
        }
        if (s.empty()) std::cout << "Try again: ";
        else {
            is_pn = clr::is_phonenumber(s);
            if (!is_pn) {
                std::cout << "This is not phone number, try again: ";
            }   
        }
    } while(!is_pn);
    caller.number = s;

    std::cout << "Enter UNIX time of last call: ";
    bool is_num = false;
    do {
        if (!std::getline(std::cin, s)) {
            throw std::runtime_error("EOF");
        }
        if (s.empty()) std::cout << "Try again: ";
        else {
            is_num = clr::is_number(s);
            if (!is_num) {
                std::cout << "This is not UNIX time, try again: ";
            }   
        }
    } while (!is_num);
    caller.lastcall = std::stoull(s);
}

void Enter_string(clr::caller&, std::string& s, std::string&) {
    std::cout << "Enter string: ";
    if (!std::getline(std::cin, s)) {
        throw std::runtime_error("EOF");
    }
}

void Use_string_to_struct(clr::caller& caller, std::string& s, std::string&) {
    caller = clr::string_to_struct(s);
}

void Use_struct_to_string(clr::caller& caller, std::string& s, std::string& name) {
    s = clr::struct_to_string(caller, name);
}

void Print_string(clr::caller&, std::string& s, std::string&) {
    if (s.empty()) throw std::invalid_argument("string is empty");
    std::cout << s << std::endl;
}

void Print_struct(clr::caller& caller, std::string&, std::string&) {
    if (caller.name.empty() || caller.number.empty()) {
        throw std::invalid_argument("caller is empty");
    }
    std::cout << "Name: " << caller.name << std::endl
              << "Phone number: " << caller.number << std::endl
              << "UNIX time: " << caller.lastcall << std::endl;
}