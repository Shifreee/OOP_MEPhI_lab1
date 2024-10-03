#include "caller.hpp"
#include <algorithm>
//#include <string_view> next std::string_view name and etc.

namespace clr {
    /*!
    Сonverts an instance of the clr::caller type to an instance of the std::string type.
    \param[in] abonent The original instance of clr::caller.
    \param[in] name The name of the record.
    \return А string in the application/x-www-form-urlencoded format.
    \throw std::invalid_argument If there are empty lines in the clr::caller structure.
    */
    std::string struct_to_string(const struct caller& abonent, const std::string& name) {
        //record[name]=KTI&record[number]=+71234567890&record[lastcall]=1724784458
        if (abonent.name.empty() || abonent.number.empty()) {
            throw std::invalid_argument("caller is empty");
        }
        return name + "[name]=" + abonent.name + '&' + name + "[number]=" 
                    + abonent.number + '&' + name + "[lastcall]=" + std::to_string(abonent.lastcall);
    }
    
    /*!
    Сonverts an instance of the clr::caller type to an instance of the std::string type.
    \param[in] abonent The original instance of clr::caller.
    \param[in] name The name of the record.
    \return А string in the application/x-www-form-urlencoded format.
    \throw std::invalid_argument If there are empty lines in the clr::caller structure.
    */
    std::string struct_to_string(const struct caller& abonent, const char* name) {
        return struct_to_string(abonent, std::string(name)); 
    }

    /*!
    Сonverts an instance of the clr::caller type to an instance of the std::string type.
    \param[in] abonent The original instance of clr::caller.
    \param[in] name The name of the record.
    \param[in] length Length of the name array.
    \return А string in the application/x-www-form-urlencoded format.
    \throw std::invalid_argument If there are empty lines in the clr::caller structure.
    */
    std::string struct_to_string(const struct caller& abonent, const char* name, const size_t& length) {
        return struct_to_string(abonent, std::string(name, length));
    }

    /*!
    Checks the number or not.
    \param[in] number A number in the std::string format.
    \return Boolean value is a number or not a number.
    */
    bool is_number(const std::string& number) {
        return std::all_of(number.begin(), number.end(), isdigit);
    }

    /*!
    Checks the phone number or not.
    \param[in] token A phone number in the std::string format.
    \return Boolean value is a number or not a number.
    */
    bool is_phonenumber(const std::string& token) {
        if (token.empty()) return false;
        int count = std::count(token.begin(), token.end(), '+'); //count of '+'
        std::string subtoken = token.substr(1, token.length() - 1); //skip '+'
        if (token.length() > 16 || count > 1 || //is this a phone number
            (count == 1 && !is_number(subtoken)) || (count == 0 && !is_number(token))) {
            return false;
        }
        return true;
    }

    /*!
    Checks the correctness of the string.
    \param[in] iss Input string stream.
    \param[in] token Token string.
    \param[in] c Space character.
    */
    void tokencheck(std::istringstream& iss, std::string& token, const char c) {
        if (!std::getline(iss, token, c) || token.empty()) {
            throw std::invalid_argument("wrong string");
        }
        return;
    }

    /*!
    Checks the correctness of the string.
    \param[in] iss Input string stream.
    \param[in] token Token string.
    \param[in] c Space character.
    \param[in] str A string for comparison.
    */
    void tokencheck(std::istringstream& iss, std::string& token, const char c, const char* str) {
        if (!std::getline(iss, token, c) || token.empty() || token != str) {
            throw std::invalid_argument("wrong string");
        }
        return;
    }

    /*!
    Сonverts an instance of the clr::caller type to an instance of the std::string type.
    \param[in] text А string in the application/x-www-form-urlencoded format.
    \return The original instance of clr::caller.
    \throw std::invalid_argument If there is a data reading error.
    */
    struct caller string_to_struct(const std::string& text) {
        //record[name]=KTI&record[number]=+71234567890&record[lastcall]=1724784458
        struct caller abonent;
        std::istringstream iss(text);
        std::string title;
        std::getline(iss, title, '[');
        std::string token;
        tokencheck(iss, token, '=', "name]");
        tokencheck(iss, token, '&'); //name
        abonent.name = token;

        tokencheck(iss, token, '[', title.data());
        tokencheck(iss, token, '=', "number]");
        tokencheck(iss, token, '&'); //number
        if (!is_phonenumber(token)) {
            throw std::invalid_argument("not phone number");
        }
        abonent.number = token;

        tokencheck(iss, token, '[', title.data());
        tokencheck(iss, token, '=', "lastcall]");
        tokencheck(iss, token, '&'); //lastcall
        abonent.lastcall = std::stoull(token);
        return abonent;
    }

    /*!
    Сonverts an instance of the clr::caller type to an instance of the std::string type.
    \param[in] text А string in the application/x-www-form-urlencoded format.
    \return The original instance of clr::caller.
    \throw std::invalid_argument If there is a data reading error.
    */
    struct caller string_to_struct(const char* text) {
        return string_to_struct(std::string(text));
    }

    /*!
    Сonverts an instance of the clr::caller type to an instance of the std::string type.
    \param[in] text А string in the application/x-www-form-urlencoded format.
    \param[in] length Length of the array.
    \return The original instance of clr::caller.
    \throw std::invalid_argument If there is a data reading error.
    */
    struct caller string_to_struct(const char* text, const size_t& length) {
        return string_to_struct(std::string(text, length));
    }
}
