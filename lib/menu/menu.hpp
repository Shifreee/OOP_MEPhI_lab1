#ifndef MENU_H
#define MENU_H


#include "caller.hpp"
#include <string>


void Exit(clr::caller&, std::string&, std::string&);
void Enter_struct(clr::caller&, std::string&, std::string&);
void Enter_string(clr::caller&, std::string&, std::string&);
void Use_string_to_struct(clr::caller&, std::string&, std::string&);
void Use_struct_to_string(clr::caller&, std::string&, std::string&);
void Print_string(clr::caller&, std::string&, std::string&);
void Print_struct(clr::caller&, std::string&, std::string&);


#endif