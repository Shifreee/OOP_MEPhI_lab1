#ifndef CALLER_H_
#define CALLER_H_


#include <string>
#include <sstream>


namespace clr {
    struct caller {
        //!A string of arbitrary length.
        std::string name;
        //!A string up to 16 characters long, which can include numbers and a "+" sign at the beginning.
        std::string number; 
        //!An integer value corresponding to a timestamp in UNIXtime format.
        size_t lastcall; 
    };


    std::string struct_to_string(const struct caller& , const std::string&);
    std::string struct_to_string(const struct caller& , const char*);
    std::string struct_to_string(const struct caller& , const char*, const size_t&);

    bool is_number(const std::string&);
    bool is_phonenumber(const std::string&);
    void tokencheck(std::istringstream&, std::string&, const char);
    void tokencheck(std::istringstream&, std::string&, const char, const char*);
    struct caller string_to_struct(const std::string&);
    struct caller string_to_struct(const char*);
    struct caller string_to_struct(const char* , const size_t&);
}


#endif